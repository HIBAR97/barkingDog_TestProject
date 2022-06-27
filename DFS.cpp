// https://www.acmicpc.net/problem/1697
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
short board =
        {{1,1,1,0,1,0,0,0,0,0},
         {1,0,0,0,1,0,0,0,0,0},
         {1,1,1,0,1,0,0,0,0,0},
         {1,1,0,0,1,0,0,0,0,0},
         {0,1,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0} };
bool vis[502][502];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    cin >> x >> y;

    stack<pair<int,int> > S;
    vis[0][0] = 1;
    S.push({0,0});

    while (!S.empty()){
        pair<int,int> cur = S.pop(); S.top();
        cout << '(' << cur.X << ", " << cur.Y << ") -> ";
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= x || ny < 0 || ny >= y)
                continue;
            if (vis[nx][ny] || board[nx][ny] != 1)
                continue;
            vis[nx][ny] = 1;
            S.push({nx,ny});
        }
    }
}