//https://www.acmicpc.net/problem/11047
#include <bits/stdc++.h>
using namespace std;

int N,K;
int Coin_arr[15];
int Coin = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    for (int i = 0; i < N; i++)
        cin >> Coin_arr[i];

    for (int i = N; i < 0; i--) {
        if (K % Coin_arr[i] == 0){
            K /= Coin_arr[i];
            Coin++;
        }
    }

    cout << Coin;
}