//https://www.acmicpc.net/problem/18808
#include <bits/stdc++.h>
using namespace std;

int N,M,K;
int R,C;
int Block[50][50][50];
int Map[20][20];

bool Move(int K,int x, int y){
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            if (Block[K][x+i][y+j] == 1 && Map[i][j] == 1)
                return false;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            if (Map[i][j] == 1)
                Block[K][x+i][y+j] = 1;
    return true;
}

void Rotate(){
    int Change[20][20];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            Change[i][j] = Map[i][j];

    for (int i = 0; i < C; i++)
        for (int j = 0; j < R; j++)
            Map[i][j] = Change[R-1-j][i];

    swap(R,C);
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
                cin >> Map[i][j];

        //풀이 시작
        for (int rotate = 0; rotate < 4; rotate++){
            bool is_paste = false;
            for (int x = 0; x <= N-R; x++){
                if(is_paste)
                    break;
                for (int y = 0; y <= M-C; y++)
                    if(Move(K,x,y)){
                        is_paste = true;
                        break;
                    }
            }
            if (is_paste)
                break;
            Rotate();
        }
    }
    int cnt = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cnt += Block[K][i][j];
    cout << cnt << "\n";
}
