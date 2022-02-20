// https://www.acmicpc.net/problem/1926
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[30][30];
bool vis[30][30];
int x, y;
int area = 0;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x;
    y = x;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            cin >> board[i][j];

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if (board[i][j] == 0 || vis[i][j])
                continue;

            queue<pair<int,int>> Q;
            vis[i][j] = 1;
            Q.push({i,j});



            while (!Q.empty()){
                area++;
                auto cur = Q.front(); Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= x || ny < 0 || ny >= y)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] != 1)
                        continue;
                    vis[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }

        }
    }
    cout << area;
}