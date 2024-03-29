//https://www.acmicpc.net/problem/2579
#include <bits/stdc++.h>
using namespace std;

int arr[305];
int arrS[305];
int N = 0, Total = 0;

void fun1(){
    for (int i = 0; i < N; i++) {
        cin >> arrS[i];
        Total += arrS[i];
    }
    if (N <= 2){
        cout << Total;
    }


}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 1; i <= N; i++){
        cin >> arrS[i];
        Total += arrS[i];
    }

    if (N <= 2){
        cout << Total;
        return 0;
    }

    arr[1] = arrS[1];
    arr[2] = arrS[2];
    arr[3] = arrS[3];

    for (int i = 4; i <= N -1; i++)
        arr[i] = min(arr[i-2], arr[i-3]) + arrS[i];

    cout << Total - min(arr[N -1], arr[N -2]);

}