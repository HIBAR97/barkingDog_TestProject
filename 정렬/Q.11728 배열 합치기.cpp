//
#include <bits/stdc++.h>
using namespace std;

int arr[10] = {3,2,7,155,23,63,72,345,234,45};
int N = 10;
int M;

//이게 편하긴함,,
void ReSort() {
    for (int i = 0; i < N-1; i++) {
        int Max_idx = 0;
        for (int j = 0; j <= i; j++)
            if (arr[Max_idx] < arr[j])
                Max_idx = j;
        swap(arr[Max_idx],arr[i]);
    }
}

//O(n^2) 자체는 똑같음
void ReSort2(){
    for (int i = N-1; i > 0; i--)
        swap(*max_element(arr, arr+1+i),arr[i]);
}

//이거도 N^2
void BubbleSort(){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

//(N+M)^2 시간복잡도 -> N+M으로 줄이기
void MergeSort(){
    int a[50],b[50],Result[101];
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        cin >> a[i];

    for (int i = 0; i < M; i++)
        cin >> b[i];

    int a_idx = 0, b_idx = 0;

    for (int i = 0; i < N+M; i++) {
        if (b_idx == M)
            Result[i] = a[a_idx++];
        else if ()
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //cin >> N;

    BubbleSort();
    for (int i = 0; i < N-1; i++)
        cout << arr[i] << '\n';

}