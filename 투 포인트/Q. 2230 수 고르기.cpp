//https://www.acmicpc.net/problem/2230
#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[100005];
int End, start;
int Result = 0x7fffffff;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr +N);

    for (start = 0; start < N; start++) {
        while (End < N && arr[End] - arr[start] < M)
            End++;
        if (End == N)
            break;
        Result = min(Result, arr[End] - arr[start]);

    }
    cout << Result;
}