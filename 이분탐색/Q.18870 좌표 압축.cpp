//https://www.acmicpc.net/problem/10816
#include <bits/stdc++.h>
using namespace std;

int N;
int arr_N[1000005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr_N[i];

    sort(arr_N, arr_N +N);

    for (int i = 0; i < N; i++) {
        if (i == 0 || arr_N[i -1] != arr_N[i])

    }
}