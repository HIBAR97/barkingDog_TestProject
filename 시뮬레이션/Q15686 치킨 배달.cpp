//https://www.acmicpc.net/problem/15686
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N,M;
int Map[50][50];

vector<pair<int,int>> chicken;
vector<pair<int,int>> Home;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++){
            cin >> Map[i][j];
            if (Map[i][j] == 1)
                Home.push_back({i,j});
            if (Map[i][j] == 2)
                chicken.push_back({i,j});
        }

    vector<int> brute(chicken.size(),1);
    fill(brute.begin(), brute.begin() + chicken.size() - M, 0);

    int mn = 0;

    do {
        int dis = 0;
        for (auto Store : Home) {
            int Num = 0;
            for (int i = 0; i < chicken.size(); i++) {
                if (brute[i] == 0)
                    continue;
                Num = min(Num, abs(chicken[i].X - Store.X) + abs(chicken[i].Y - Store.Y));
                cout << Num;
            }
            dis += Num;
        }
        mn = min(mn,dis);
    }while (next_permutation(brute.begin(), brute.end()));

    cout << mn;
}

