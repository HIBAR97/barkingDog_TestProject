//https://www.acmicpc.net/problem/12852
#include <bits/stdc++.h>
using namespace std;

int N;
int arr[100005], Map[100005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    Map[0] = 0;
    for (int i = 2; i <= N; i++) {
        Map[i] = Map[i -1] + 1;
        arr[i] = i -1;

    }
}