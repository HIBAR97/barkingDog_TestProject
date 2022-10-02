//https://www.acmicpc.net/problem/11659
#include <bits/stdc++.h>
using namespace std;

int N,M;
int i,j;
int arr[100005], Result[100005];

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
        cin >> i >> j;
        cout << Result[j] - Result[i -1] << '\n';
    }
}