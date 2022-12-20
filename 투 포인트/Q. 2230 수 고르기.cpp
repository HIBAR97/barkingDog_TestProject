//https://www.acmicpc.net/problem/2230
#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[100000005];
int end = 0 ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr +N);

    for (int i = 0; i < N; i++) {
        while (end < N && arr[end] - arr[i] < M)
            end++;
        if (end = N)
            break;
    }
}