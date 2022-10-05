//https://www.acmicpc.net/problem/12852
#include <bits/stdc++.h>
using namespace std;

int N;
int arr[100005], Map[100005];
int Result;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    Map[0] = 0;
    for (int i = 2; i <= N; i++) {
        Map[i] = Map[i -1] + 1;
        arr[i] = i -1;

        if (i %2 == 0 && Map[i] > Map[i/2] + 1){
            Map[i] = Map[i /2] + 1;
            arr[i] = i/2;
        }

        if (i %3 == 0 && Map[i] > Map[i /3] + 1){
            Map[i] = Map[i/3] + 1;
            arr[i] = i/3;
        }
    }
    cout << Map[N] << '\n';

    Result = N;

    while (1){
        cout << Result << ' ';

    }
}