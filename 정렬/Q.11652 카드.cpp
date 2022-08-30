//https://www.acmicpc.net/problem/11652
#include <bits/stdc++.h>
using namespace std;

void Radix_Sort(){
    int N = 10;
    int Test_Data[10] = {012,421,046,674,103,502,007,100,021,545};
    int arr[10];
    vector<int> vector[10];

    for (int i = 0; i < N; i++)
       if (i = Test_Data[i] % 10)
           arr[i] = Test_Data[i];


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Radix_Sort();
}
