//https://www.acmicpc.net/problem/12865
#include <bits/stdc++.h>
using namespace std;

int N,W,V;
int K;
pair<int, int> Mono[105];
int Bag_W, Bag_V;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    for (int i = 0; i < N; i++)
        cin >> Mono[i].second >> Mono[i].first;

    sort(Mono, Mono +N);

    for (int i = 0; i < N; i++) {
        if (V > Bag_W)
            continue;
        Bag_W += Mono[i].second;
        Bag_V += Mono[i].first;

        if (V <= Bag_W)
            cout << Bag_V;
    }

}