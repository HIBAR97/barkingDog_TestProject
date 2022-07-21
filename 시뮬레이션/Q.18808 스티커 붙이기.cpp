//https://www.acmicpc.net/problem/18808
#include <bits/stdc++.h>
using namespace std;

int N,M,K;
int R,C;
int Block[20][20][20];
int Map[20][20];

void Move(int x, int y, int idx){
    for (int i = 0; i < idx; i++)
        for (int j = 0; j < x; j++)
            for (int k = 0; k < y; k++){
                Block[k][x][y] = Block[k][x+1][y];
                Block[k][x][y] = Block[k][x][y+1];
            }
}

void Rotate(int x, int y, int idx){
    int Change[20][20][20];

    for (int i = 0; i < idx; i++)
        for (int j = 0; j < x ; j++)
            for (int k = 0; k < y; k++)
                Change[idx][x][y] = Block[idx][3-1-y][x];

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K;

    //입력
    while (K--){
        cin >> R >> C;
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
                cin >> Block[K][i][j];

        //풀이 시작
        for (int rotate = 0; rotate < 4; rotate++){
            bool is_paste = false;
            for (int x = 0; x < N-r; x++)
                if(is_paste)
                    break;
            for (int y = 0; y <= M-c ; y++)
                if(Move(x,y)){
                    is_paste = true;
                    break;
                }
        }
    }
}
