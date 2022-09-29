//https://www.acmicpc.net/problem/11659
#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[10005], Result[10005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    Result[0] = 0;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        Result[i] = Result[i -1] + arr[i];
    }

    while(M--){

    }
}