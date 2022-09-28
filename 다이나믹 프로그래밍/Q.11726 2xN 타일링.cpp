//https://www.acmicpc.net/problem/11726
#include <bits/stdc++.h>
using namespace std;

int N;
int Block[10005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;
    
    Block[1] = 1;
    Block[2] = 2;

    for (int i = 3; i <= N; i++)
        Block[i] = (Block[i -2] + Block[i -1]) % 10007;

    cout << Block[N];
}