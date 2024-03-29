//https://www.acmicpc.net/problem/11652
#include <bits/stdc++.h>
using namespace std;

int N, arr_idx;
vector<int> a;
long long b[1000005];


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

//void STL_Sort(){
//    int C[5] = {1,4,5,2,7};
//    sort(C,C+5);
//
//    vector<int> b = {1,4,5,2,7};
//    sort(b.begin(), b.end());
//
//    bool cmp(int a, int b){
//        if(a % 5 != b % 5)
//            return a % 5 < b % 5;
//        return a < b;
//    }
//
//    int a[7] = {1,2,3,4,5,6,7};
//    sort(a, a + 7, cmp);
//}


void Result(){
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> b[i];

    sort(b, b+N);
    int cnt = 0;
    long long Max = -(111 << 62) - 1;
    int Max_cnt = 0;

    for (int i = 0; i < N; i++) {
        if(i == 0 || b[i-1] == b[i])
            cnt++;
        else{
            if(cnt > Max_cnt){
                Max_cnt = cnt;
                Max = b[i-1];
            }
            cnt = 1;
        }
    }
    if(cnt > Max_cnt)
        Max = b[N-1];
    cout << Max;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> arr_idx;
        for (int j = 0; j < a.size(); j++) {

            if (a.at(j) != arr_idx)
                a.push_back(arr_idx);

            else if (a.at(j) == arr_idx)
                a.insert(j,j+1);

        }
    }
    //Radix_Sort();
}
