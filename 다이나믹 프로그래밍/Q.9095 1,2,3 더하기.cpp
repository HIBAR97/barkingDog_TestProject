//https://www.acmicpc.net/problem/9095
#include <bits/stdc++.h>
using namespace std;
int N,T;
int arrN[11];
int arrR[11];

int Result(){

}

int OTT(){

    arrR[1] = 1;
    arrR[2] = 2;
    arrR[3] = 4;

    for (int i = 0; i < 11; i++)
        arrR[i] = arrR[i - 1] + arrR[i - 2] + arrR[i - 3];

    cin >> T;

    while (T--){
        cin >> N;
        cout << arrR[N] << '\n';
    }

    //Result();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

}