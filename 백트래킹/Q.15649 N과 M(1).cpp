//https://www.acmicpc.net/problem/15649
#include <bits/stdc++.h>
using namespace std;
int N,M;
int arr;
bool used[10];

void func(int k){
    if(k == M){
        for(int i = 0; i < M; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = 1; i <= N; i++){
        if(!used[i]){
            arr[k] = i;
            used[i] = 1;
            func(k+1);
            used[i] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    func(0);
}