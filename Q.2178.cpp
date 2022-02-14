// https://www.acmicpc.net/problem/2178
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[502];
int dis[502][502];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y = 0;

    cin >> x >> y;
    for (int i = 0; i < x; i++)
        cin >> board[i];

    for (int i = 0; i < x; i++)
        fill(dis[i],dis[i] + y, -1); //초기화


    queue<pair<int, int> > Q;
    Q.push({0,0});
    dis[0][0] = 0;

    while (!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= x || ny < 0 || ny >= y)
                continue;
            if (dis[nx][ny] >= 0 || board[nx][ny] != '1')
                continue;
            dis[nx][ny] = dis[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }
    cout << dis[x-1][y-1] + 1;
}
