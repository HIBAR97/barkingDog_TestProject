//https://www.acmicpc.net/problem/1477
//그리디 문제 아님 parametiric search
#include <bits/stdc++.h>
using namespace std;

int N,M,L;
int Wait[55];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> L;

    for (int i = 0; i < N; i)
        cin >> Wait[i];

    sort(Wait, Wait +N);



}