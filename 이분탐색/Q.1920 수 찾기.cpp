//https://www.acmicpc.net/problem/2579
#include <bits/stdc++.h>
using namespace std;

int N,M,cnt;
int arr_N[100005];
int arr_M[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr_N[i];

    cin >> M;
    for (int i = 0; i < M; i++)
        cin >> arr_M[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr_N[i] == arr_M[i])
                cnt = 1;
        }
        if (cnt == 1)
            cout << "1" << "\n";
    }
}
