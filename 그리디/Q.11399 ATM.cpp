//https://www.acmicpc.net/problem/11399
#include <bits/stdc++.h>
using namespace std;

int N;
int Result;
int arrP[1005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arrP[i];

    sort(arrP, arrP +N);

    for (int i = 0; i < N; i++)
        Result += arrP[i] * (N -i);

    cout << Result;
}