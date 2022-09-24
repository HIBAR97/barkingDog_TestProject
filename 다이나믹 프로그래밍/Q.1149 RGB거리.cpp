//https://www.acmicpc.net/problem/1149
#include <bits/stdc++.h>
using namespace std;

int N;
int Cost_R[1010], Cost_G[1010], Cost_B[1010];
int House[1001][3];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> Cost_R[i] >> Cost_G[i] >> Cost_B[i];

    House[1][0] = Cost_R[0];
    House[1][1] = Cost_G[0];
    House[1][2] = Cost_B[0];

    for (int i = 2; i <= N; i++) {
        House[i][0] = min(House[i - 1][1], House[i - 1][2]) + Cost_R[i];
        House[i][1] = min(House[i - 1][0], House[i - 1][2]) + Cost_G[i];
        House[i][2] = min(House[i - 1][0], House[i - 1][1]) + Cost_B[i];
    }

    cout << min({House[N][0], House[N][1], House[N][2]});
}