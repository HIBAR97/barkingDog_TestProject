//https://www.acmicpc.net/problem/1654
#include <bits/stdc++.h>
using namespace std;

int K, N;
int arr[1000005];
int Total, Div;

int TF(int Div, int N){
    int Result;

    for (int i = 0; i < N; i++)
         Result += arr[i] / Div;

    if (Result == N)
        return 1;
    else
        return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> K >> N;

    for (int i = 0; i < K; i++){
        cin >> arr[i];
        Total += arr[i];
    }

    Div = Total / N;

    if (TF(Div, N))

}