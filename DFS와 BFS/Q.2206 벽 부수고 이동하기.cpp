// https://www.acmicpc.net/problem/2206
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1002][1002];
bool vis[1002][1002];
int N, M;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> board[i][j];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 0 ||vis[i][j])
                continue;
            board[i][j] = 1;

            queue<pair<int, int>> Q;
            Q.push({i,j});
            while (!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                        continue;
                    if (board[nx][ny] != 1 || vis[nx][ny])
                        continue;
                    Q.push({nx, ny});
                    vis[nx][ny] = 1;
                }
            }
        }
        cout << "1";
    }
}