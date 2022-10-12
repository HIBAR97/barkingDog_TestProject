//https:www.acmicpc.net/problem/1931
#include <bits/stdc++.h>
using namespace std;

int N;
int T = 0;
int Result;
pair <int, int> Time[10000005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < N; i++) 
        cin >> Time[i].first >> Time[i].second;

    sort(Time, Time +N);

    for (int i = 0; i < N; i++) {
        if (T > Time[i].first)
            continue;

            Result++;
            T = Time[i].second;
    }
    cout << Result;
}