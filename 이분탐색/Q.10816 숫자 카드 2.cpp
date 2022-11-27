//https://www.acmicpc.net/problem/10816
#include <bits/stdc++.h>
using namespace std;

int N, M, T;
int arr_N[500005];
int arr_M[20000005];

int Result_L(int T, int l){
    int start = 0;
    int end = l;

    while(start < end){
        int mid = (start + end) /2;

        if (arr_N[mid] >= T)
            end = mid;
        else
            start = mid +1;
    }
    return start;
}

int Result_R(int T, int l){
    int start = 0;
    int end = l;

    while(start < end){
        int mid = (start + end) /2;

        if (arr_N[mid] > T)
            end = mid;

        else
            start = mid +1;

    }
    return start;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr_M[i];

    sort(arr_M, arr_M+N);

    cin >> M;

    while (M--){
       cin >> T;

       cout << Result_L(T,N);
    }

}
