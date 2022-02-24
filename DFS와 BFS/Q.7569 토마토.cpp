// https://www.acmicpc.net/problem/7569
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define Z Third
int board[102][102][102];
bool vis[102][102][102];
int M,N,H;
int dx[] = {0,0,1,-1,0,0};
int dy[] = {1,-1,0,0,0,0};
int dz[] = {0,0,0,0,1,-1};

void reset(){
    for (int i = 0; i < H; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < M; k++){
                board[i][j][k] = -1;
                vis[i][j][k] = 0;
            }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N >> H;

    reset();

    /*vector<string> board(n);
    for(string& i : board) cin >> i;
     벡터로 입력 받기*/

    for (int i = 0; i < H; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < M; k++)
                cin >> board[i][j][k];

    for (int i = 0; i < H; i++){
        for (int j = 0; j < N; j++){
            for (int k = 0; k < M; k++){
                if (board[i][j][k] == 0 || vis[i][j][k])
                    continue;
                board[i][j][k] = 1;

                queue<tuple<int,int,int>> Q;
                Q.push({i,j,k});

                while (!Q.empty()){
                    auto [nx,ny,nz] = Q.front(); Q.pop();

                    for (int dir = 0; dir < 6; dir++) {
                        int nx = [nx,ny,nz].X + dx[dir];
                        int ny = [nx,ny,nz].Y + dy[dir];
                        int nz = [nx,ny,nz].Z + dz[dir];

                    }
                }
            }
        }
    }









}
