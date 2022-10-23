//https://www.acmicpc.net/problem/12865
#include <bits/stdc++.h>
using namespace std;

int N,K;
int Mono[105][100005];
int W[105];
int V[1005];


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    for (int i = 1; i <= N; i++)
        cin >> W[i] >> V[i];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            if (j - W[i] >= 0)
                Mono[i][j] = max(Mono[i -1][j], Mono[i -1][j - W[i]] + V[i]);
            else
                Mono[i][j] = Mono[i -1][j];
        }
    }
    cout << Mono[N][K];
}