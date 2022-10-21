//https://www.acmicpc.net/problem/12865
#include <bits/stdc++.h>
using namespace std;

int N,K;
int Mono[105][100005];
int W[105];
int V[105];


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    for (int i = 0; i < N; i++)
        cin >> Mono[i].second >> Mono[i].first;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            if (j - W[i] >= 0)
                Mono[i][j];
        }
    }

}