// https://www.acmicpc.net/problem/7569
#include <bits/stdc++.h>
using namespace std;
//#define X first
//#define Y second
int board[102][102][102];
bool vis[102][102][102];
int M,N,H;
int Tomato = 0;
int Days = 0;
queue<tuple<int,int,int>> Q;
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

    //reset();

    /*vector<string> board(n);
    for(string& i : board) cin >> i;
     벡터로 입력 받기*/

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            for (int k = 0; k < H; k++){
                cin >> board[i][j][k];
                if (board[i][j][k] == 0)
                    Tomato++;
                if (board[i][j][k] == 1) {
                    Q.push({i, j, k});
                    vis[i][j][k] = 1;
                }
            }
        }
    }




    if (Tomato == 0){
        cout << Tomato;
        return 0;
    }

    while (!Q.empty()){
        //auto cur = Q.front(); Q.pop();
        int Size = Q.size();
        for (int i = 0; i < Size; i++) {
            int X = get<0>(Q.front());
            int Y = get<1>(Q.front());
            int Z = get<2>(Q.front());
            Q.pop();
            for (int dir = 0; dir < 6; dir++) {
                int nx = X + dx[dir];
                int ny = Y + dy[dir];
                int nz = Z + dz[dir];

                if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= H )
                    continue;
                if (board[nx][ny][nz] != 1 || vis[nx][ny][nz])
                    continue;
                Q.push({nx,ny,nz});
                vis[nx][ny][nz] = vis[X][Y][Z] + 1;
                Tomato--;
            }
        }
        Days++;
    }
    if (Tomato > 0){
        cout << -1;
    } else{
        cout << Days - 1 << '\n';
    }

}




