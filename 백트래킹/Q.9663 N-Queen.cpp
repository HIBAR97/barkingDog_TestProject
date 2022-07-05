//https://www.acmicpc.net/problem/9663
#include <bits/stdc++.h>
using namespace std;
int N, M;
int arr[4];
bool used1[40];
bool used2[40]; //x+y
bool used3[40]; //x-y
int cnt = 0;

void func(int k){
    if (k == N){
        cnt++;
        return;
    }

    for(int i = 0; i < N; i++) {
        if(used1[i] || used2[i + k] || used3[k-i+N-1])
            continue;

        used1[i] = 1;
        used2[i + k] = 1;
        used3[k-i+N-1] = 1;
        func(k+1);
        used1[i] = 0;
        used2[i + k] = 0;
        used3[k-i+N-1] = 0;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    func(0);
    cout << cnt;
}


