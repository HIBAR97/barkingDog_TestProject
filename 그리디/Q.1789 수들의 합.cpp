//https://www.acmicpc.net/problem/1789
#include <bits/stdc++.h>
using namespace std;

int N,S;
int Num = 1;
int cnt = 0;
long long Result = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> S;

    while (true){
        Result += Num;
        cnt++;

        if (Result > S) {
            cnt--;
            break;
        }
        Num++;
    }

    cout << cnt;
}