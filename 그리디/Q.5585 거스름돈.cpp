//https://www.acmicpc.net/problem/5585
#include <bits/stdc++.h>
using namespace std;

int N;
int Result;
int arr[6] = {500,100,50,10,5,1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < 6; i++)
        if (N / arr[i] > 0){
            N -= N/arr[i] * arr[i];
            Result += N/arr[i];
        }

    cout << Result;
}
