//https://www.acmicpc.net/problem/2230
#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[100000005];
int end = 0 ;
int Result;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr +N);

    for (int i = 0; i < N; i++) {
        while (end < N && arr[i] - arr[i] < M){
            if (i = N)
                break;
            Result = min(Result, arr[end] - arr[i])
        }
    }
}