//https://www.acmicpc.net/problem/1654
#include <bits/stdc++.h>
using namespace std;

int K, N;
int arr[1000005];
int Total, Div;

typedef long long ll;

int TF(int Div, int N){
    int Result;

    for (int i = 0; i < N; i++)
         Result += arr[i] / Div;

    if (Result == N)
        return 1;
    else
        return 0;
}

bool Solve(ll x){
    ll cur = 0;

    for (int i = 0; i < K; i++)
        cur += arr[i] /x;

    return cur >= N;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> K >> N;

    for (int i = 0; i < K; i++){
        cin >> arr[i];
        //Total += arr[i];
    }

    ll start = 1;
    ll end = 2^31 - 1;

    while(start < end){
        ll midle = (start + end + 1)/2;
        if (Solve(midle))
            start = midle;
    }

    cout << start;

}