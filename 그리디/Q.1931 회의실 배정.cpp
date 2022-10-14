//https:www.acmicpc.net/problem/1931
#include <bits/stdc++.h>
using namespace std;

int N;
int T = 0;
int Result = 0;
pair <int, int> Time[100005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) 
        cin >> Time[i].second >> Time[i].first;

    sort(Time, Time +N);

    for (int i = 0; i < N; i++) {
        if (T > Time[i].second)
            continue;

            Result++;
            T = Time[i].first;
    }
    cout << Result;
}