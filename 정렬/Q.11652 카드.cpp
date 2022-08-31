//https://www.acmicpc.net/problem/11652
#include <bits/stdc++.h>
using namespace std;

void Fail_Radix_Sort(int N){
    int Test_Data[10] = {012,421,046,674,103,502,007,100,021,545};
    vector<int> vector;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i = Test_Data[j] % 10){
                vector.push_back(Test_Data[j]);
            }

    for (int i = 0; i < vector.size(); i++)
        cout << vector[i];

}

void Radix_Sort(){
    int N = 15;
    int Test_Data[10] = {012,421,046,674,103,502,007,100,021,545};
    int Ten_idx = 3;
    int Ten_arr[3];
    vector<int> l[10];


    Ten_arr[0] = 1;
    for (int i = 0; i < Ten_idx; i++)
        Ten_arr[i] = Ten_arr[i-1] * 10;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
            l[j].clear();

        for (int j = 0; j < N; j++)
            l[(Test_Data[j] / Ten_arr[i]) % 10].push_back(Test_Data[j]);

        int a_idx = 0;
        for (int j = 0; j < 10; j++) {
            for (auto x : l[j])
                Test_Data[a_idx++] = x;
        }
    }

    for (int i = 0; i < N; i++)
        cout << Test_Data << ' ';


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Radix_Sort();
    cout << "1";
}
