//https:www.acmicpc.net/problem/1931
#include <bits/stdc++.h>
using namespace std;

int N,W;
int Rope[100005];
int Result;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> Rope[i];
    }

    sort(Rope, Rope +N);

    for (int i = 0; i < N; ++i)
        Result = max(Result, Rope[N -i]*i);
}