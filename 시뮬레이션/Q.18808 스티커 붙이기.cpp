//https://www.acmicpc.net/problem/18808
#include <bits/stdc++.h>
using namespace std;

int N,M,K;
int R,C;
int Block[20][20][20];

void Rotate(int x, int y, int idx){
    for (int i = 0; i < idx; i++)
        for (int j = 0; j < x ; j++)
            for (int k = 0; k < y; k++)
                Block[idx][x][y] = Block[idx][3-1-y][x];

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K;

    //입력
    for (int i = 0; i < K; i++) {
        cin >> R >> C;
        for (int j = 0; j < R; j++)
            for (int k = 0; k < C; k++)
                cin >> Block[K][N][M];

    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)



}
