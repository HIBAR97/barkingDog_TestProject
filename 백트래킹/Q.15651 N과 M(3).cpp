//https://www.acmicpc.net/problem/15651
#include <bits/stdc++.h>
using namespace std;
int N,M;
int arr[10];
bool used[10];

void func(int k){
    if(k == M){
        for(int i = 0; i < M; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;
    func(0);
}