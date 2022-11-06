//https://www.acmicpc.net/problem/1789
#include <bits/stdc++.h>
using namespace std;

int N,S;
int Num;
int cnt = 1;
long long Result = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> S;

    while (true){
        if (Result < S){
            Result += Num;
            cnt++;
        }
        else if (Result > S) {
            cnt--;
            break;
        }
        Num++;
    }

    cout << Result;
}