//https://www.acmicpc.net/problem/2295
#include <bits/stdc++.h>
using namespace std;

int N;
int arr[1005];
vector<int> Plus;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr +N);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            Plus.push_back(arr[i] + arr[j]);

    sort(Plus.begin(), Plus.end());

    for (int i = N -1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (binary_search(Plus.begin(), Plus.end(), arr[i] - arr[j])){
                cout << arr[i];
                return 0;
            }

}