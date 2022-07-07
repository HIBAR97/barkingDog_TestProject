//https://www.acmicpc.net/step/34
//permutation 함수사용
#include <bits/stdc++.h>
using namespace std;
int N,M;
vector<int> V;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
        V.push_back(i);

    do {
        for (int i = 0; i < M; i++)
            cout << V[i] << ' ';
        cout << '\n';
        reverse(V.begin() + M, V.end());
    }while(next_permutation(V.begin(),V.end()));
}