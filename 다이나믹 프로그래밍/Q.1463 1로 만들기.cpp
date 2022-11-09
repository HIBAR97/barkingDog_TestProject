//https://www.acmicpc.net/problem/1463
#include <bits/stdc++.h>
using namespace std;
int arr[10000001];
int N, Fuc;

int Make_1(int Num, int tamp){
    if (Num % 3 == 0 && Num % 2 == 0)
        Num = min(Num/2, Num/3);

    else if (Num % 3 == 0 || Num % 2 == 0)
        Num = Num / 3;

    else if (Num % 3 == 0)
        Num = Num / 3;

    else if (Num % 2 == 0)
        Num = Num / 2;

    else
        Num = Num - 1;

    tamp++;
    Make_1(Num,tamp);

    cout << tamp;
}

void Make_2(){
    arr[1] = 0;
    for (int i = 2; i <= N; i++) {
        arr[i] = arr[i-1] + 1;
        if (i % 2 == 0)
            arr[i] = min(arr[i],arr[i/2] + 1);
        if (i % 3 == 0)
            arr[i] = min(arr[i], arr[i/3] + 1);
    }
    cout << arr[N];
}

void Fuc3(){
    arr[0] = 0;
    for (int i = 1; i < N; i++) {
        if (N % 3 == 0 || N % 2 == 0)
            arr[i] = min(N/3,N/2);

        if (N % 3 == 0)
            arr[i] = N /3;

        if (N % 2 == 0)
            arr[i] = N /2;

        else
            arr[i] = N -1;
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    //Make_1(N,Fuc);
    Make_2();
}