//https://www.acmicpc.net/problem/10816
#include <bits/stdc++.h>
using namespace std;

int N;
int arr_N[1000005];
vector<int> Result, temp;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> arr_N[i];
        temp.push_back(arr_N[i]);
    }


    sort(temp.begin(), temp.end());

    for (int i = 0; i < N; i++) {
        if (i == 0 || temp[i -1] != temp[i])
            Result.push_back(arr_N[i]);
    }
    for (int i = 0; i < N; i++)
        cout << lower_bound(Result.begin(), Result.end(), arr_N[i]) - Result.begin() << ' ';
}