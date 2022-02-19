// https://www.acmicpc.net/problem/1074
#include <bits/stdc++.h>
using namespace std;

int funZ (int n, int m, int o){
    if(n == 0)
        return 0;
    int half = 1 << (n - 1);
    if(m < half && o < half)
        return funZ(n - 1, m, o);
    if(m < half && o >= half)
        return half * half + funZ(n - 1, m, o - half);
    if(m >= half && o < half)
        return 2*half*half + funZ(n-1, m - half, o);
    return 3*half*half + funZ(n-1, m - half, o - half);
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m,o;
    cin >> n >> m >> o;
    cout << funZ(n,m,o);


}