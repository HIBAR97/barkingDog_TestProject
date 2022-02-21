// https://www.acmicpc.net/problem/1012
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[52][52];
bool vis[52][52];
int R;
int m, n, k;
int Locx, Locy;
int area = 0;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> R;
    for (int i = 0; i < R; i++) {
        cin >> m >> n >> k;

        for (int j = 0; j <= k; j++) {
            cin >> Locx >> Locy;
            board[Locy][Locy] = 1;
        }

        for (int j = 0; j < m; j++) {
            for (int l = 0; l < n; l++) {
                if (board[j][l] == 0 || vis[j][l])
                    continue;
                    queue<pair<int,int>> Q;
                    vis[j][l] = 1;
                    Q.pop();

                    while (!Q.empty()){
                        area++;
                        auto cur = Q.front(); Q.pop();
                        for (int dir = 0; dir < 4; dir++) {
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                                continue;
                            if (vis[nx][ny] || board[nx][ny] != 1)
                                continue;
                            vis[nx][ny] = 1;
                            Q.push({nx,ny});
                        }
                        cout << area;

                    }
            }
        }
    }
}