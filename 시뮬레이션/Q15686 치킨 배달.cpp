//https://www.acmicpc.net/problem/15686
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N,M;
int Map[50][50];

vector<pair<int,int>> chichen;
vector<pair<int,int>> store;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++){
            cin >> Map[i][j];
            if (Map[i][j] == 1)
                store.push_back({i,j});
            if (Map[i][j] == 2)
                chichen.push_back({i,j});
        }

    vector<int> brute(chichen.size(),1);
    fill(brute.begin(), brute.begin() + chichen.size() - M, 0);

    int mn = 0;

    do {
        int dis = 0;
        for (auto Store : store) {
            for (int i = 0; i < chichen.size(); i++) {
                if (brute[i] == 0)
                    continue;


            }
        }
    mn = min(mn,dis);
    }while (next_permutation(brute.begin(), brute.end()));

    cout << mn;
}

