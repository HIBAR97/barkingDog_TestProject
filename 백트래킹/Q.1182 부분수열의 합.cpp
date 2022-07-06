//https://www.acmicpc.net/problem/1182
#include <bits/stdc++.h>
using namespace std;

int N,S;
int arr[20];
int cnt = 0;

void func(int k, int Sum){
    if (k == N) {
        if (Sum == S)
            cnt++;
        return;
    }
    //깊이가 k가 될때까지 내려감
    //Sum이랑 비교해보고 arr Sum 초기화
    func(k+1,Sum);
    func(k+1,Sum+arr[k]);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> S;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    func(0,0);

    //갯수 중복 해결
    if (S == 0)
        cnt--;
    cout << cnt;
}
