//https://www.acmicpc.net/problem/1026
#include <bits/stdc++.h>
using namespace std;

int N;
int A[100], B[100];
int Result;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < N; i++)
        cin >> B[i];

    sort(A, A +N);
    sort(B, B +N);

    for (int i = 0; i < N; i++)
        Result += A[i] * B[N -i -1];

    cout << Result;
}