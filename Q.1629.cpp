// https://www.acmicpc.net/problem/1629
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll Pow(ll a, ll b, ll c){
    if (b == 1)
        return a % c;
    ll val = Pow(a, b/2 , c);
    val = val * val % c;
    if(b % 2 == 0)
        return val;
    return val * a % c;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll A, B, C;

    cin >> A >> B >> C;

    cout << Pow(A,B,C);
}