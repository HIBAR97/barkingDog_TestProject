//https://www.acmicpc.net/problem/15688
#include <bits/stdc++.h>
using namespace std;

int N;
int arr[2000002];
int arr_idx;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> arr_idx;
        arr[arr_idx - 1]++;
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < arr[i]; j++)
            cout << i + 1 << '\n';


}
