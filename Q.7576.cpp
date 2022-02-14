// https://www.acmicpc.net/problem/7576
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1002][1002];
int status[1002][1002];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;

    cin >> x >> y;
    queue<pair<int, int> > Q;

    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            cin >> board[i][j];
            if (board[i][j] == 1)
                Q.push({i,j});
            if (board[i][j] == 0)
                status[i][j] = -1;
        }
    }

    while (!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= y || ny < 0 || ny >= x)
                continue;
            if (status[nx][ny] >= 0)
                continue;
            status[nx][ny] = status[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }
    int ans = 0;
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if (status[i][j] == -1){
                cout << -1;
                return 0;
            }
            ans = max(ans, status[i][j]);
        }
    }
    cout << ans;
}