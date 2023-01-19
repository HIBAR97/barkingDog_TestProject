//https://www.acmicpc.net/problem/1620
#include <bits/stdc++.h>
using namespace std;

unordered_map<string , int> S_to_Int;
string Int_to_S[1000005];
int N,M;
string Q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> Int_to_S[i];
        S_to_Int[Int_to_S[i]] = i;
    }

    while (M--){
        cin >> Q;

        if (isdigit(Q[0]))
            cout << Int_to_S[stoi(Q)] << '\n';
        else
            cout << S_to_Int[Q] << '\n';
    }
}