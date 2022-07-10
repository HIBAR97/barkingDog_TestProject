//https://www.acmicpc.net/problem/14888
#include <bits/stdc++.h>
using namespace std;

int N;
int arr[100];
int arr2[4];
int Result_Max = -1000000001;
int Result_Min = 1000000001;

void func(int R, int idx){
    if (idx == N){
        if (R > Result_Max)
            Result_Max = R;
        if (R < Result_Min)
            Result_Min = R;
        return;
    }
    for (int i = 0; i < 4; i++) {
        if(arr2[i] > 0){
            arr2[i]--;
            if(i == 0)
                func(R + arr[idx], idx + 1);
            else if (i == 1)
                func(R - arr[idx], idx + 1);
            else if (i == 2)
                func(R * arr[idx], idx + 1);
            else if (i == 3)
                func(R / arr[idx], idx + 1);
            arr2[i]++;
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < 4; i++)
        cin >> arr2[i];

    func(arr[0],1);
    cout << Result_Max << '\n';
    cout << Result_Min;
}