//https://www.acmicpc.net/problem/12100
#include <bits/stdc++.h>
using namespace std;

int N;
int arr[10];

int board[20][20];
int board2[20][20];

//일단 한행만 옆으로 실행하는 함수 만들어보기
void left_side(){
    int Result[N];
    bool able[N];

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++) {
        if (arr[i] == 0)
            continue;
        if (Result[0] == 0){
            Result[0] = arr[i];
            continue;
        }
        int idx = i;
        while (Result[idx] == 0)
            idx--;
        if (!able[idx] && Result[idx] == arr[i]){
            able[idx] = true;
            Result[idx] *= 2;
        }
    }

    for (int i = 0; i < N; i++)
        cout << arr[i] << "\n";
}

void left_side2(){
    int able[N];
    int idx = 0;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    for (int i = 0; i < N; i++) {
        if (arr[i] == 0)
            continue;
        if (able[idx] == 0)
            able[idx] = arr[i];
        else if (able[idx] == arr[i])
            able[idx++] *= 2;
        else
            able[++idx] = arr[i];
    }
}

//전에 만들었던 회전 함수
void Rotate(){
    int Change[20][20];
    int R,C;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            Change[i][j] = board2[i][j];

    for (int i = 0; i < C; i++)
        for (int j = 0; j < R; j++)
            board2[i][j] = Change[R-1-j][i];

    swap(R,C);
}

//실제 오퍼레이션 함수
void Op(int dir){

    while (dir--)
        Rotate();
    for (int i = 0; i < N; i++) {
        int tilted[20] = {};
        int idx = 0;

        for (int j = 0; j < N; j++) {
            if (board2[i][j] == 0)
                continue;
            else if (tilted[idx] == 0)
                tilted[idx] = board2[i][j];
            else
                tilted[++idx] = board2[i][j];
        }
        for (int j = 0; j < N; j++)
            board2[i][j] = tilted[j];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> board[i][j];

    //left_side2();
    Op(N);

    int mx = 0;
    for (int i = 0; i < 1024; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                board2[j][k] = board[j][k];
                //cout << board2[j][k];
            }
        }
        int brute = i;
        for (int j = 0; j < 5; j++) {
            int dir = brute % 4;
            brute /= 4;
            Op(dir);
        }
        for (int j = 0; j < N; j++)
            for (int k = 0; k < N; k++)
                mx = max(mx,board2[j][k]);
    }

    cout << mx;

}