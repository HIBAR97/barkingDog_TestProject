//https://www.acmicpc.net/problem/15651
#include <bits/stdc++.h>
using namespace std;
int N,M;
vector<int>V;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for(int i = 0; i < N; i++)
        V.push_back(i < M ? 0 : 1);

    do {
        for (int i = 0; i < M; i++)
            if (V[i] == 0)
                cout << i+1 << ' ';
        cout << '\n';
    }while(next_permutation(V.begin(), V.end()));
}
