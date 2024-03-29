//https://www.acmicpc.net/problem/1806
#include <bits/stdc++.h>
using namespace std;

int N, S;
int arr[100005];
int Result, End;
int Min = 0x7fffffff;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> S;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    Result = arr[0];

    for (int Start = 0; Start < N; Start++) {
        while(End < N && Result < S){
            End++;
            if (End != N)
                Result += arr[End];
        }
        if (End == N)
            break;
        Min = min(Min, End - Start + 1);
        Result -= arr[Start];
    }
    if (Min == 0x7fffffff)
        Min = 0;
    cout << Min;
}