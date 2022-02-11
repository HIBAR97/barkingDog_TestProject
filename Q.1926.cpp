// https://www.acmicpc.net/problem/1926
#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;
int board[502][502];
bool vis[502][502];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;

    for (int i = 0; i < x; i++) 
        for (int j = 0; j < y; j++) 
            cin >> board[x][y];

    int Max = 0;
    int Num = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == vis[i][j])
                continue;
            Num++;
            queue<pair<int, int> > Q;
            vis[i][j] = 1;
            Q.push({i,j});

            int area = 0;

            while (!Q.empty()) {
                area++;
                pair<int,int> cur = Q.front(); Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dx[dir];

                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] != 1)
                        continue;
                    vis[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }
            Max = Num(Max, area);
        }
    }
    cout << Num << '\n' << Max;
}