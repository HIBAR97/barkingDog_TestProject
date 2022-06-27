// https://www.acmicpc.net/problem/1012
#include <bits/stdc++.h>
using namespace std;
#define Y first
#define X second
short board;
bool vis[51][51];
int R;
int m, n, k;
int Locx, Locy;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void reset(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            board[i][j] = 0;
            vis[i][j] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> R;
    while (R--) {
        cin >> m >> n >> k;
        reset();
        while (k--) {
            cin >> Locx >> Locy;
            board[Locy][Locx] = 1;
        }
        int area = 0;
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                if (board[j][l] == 0 || vis[j][l])
                    continue;
                area++;
                board[j][l] = 1;

                queue<pair<int,int>> Q;
                Q.push({j,l});
                while (!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                            continue;
                        if (board[ny][nx] != 1 || vis[ny][nx])
                            continue;
                        Q.push({ny,nx});
                        vis[ny][nx] = 1;
                    }
                }
            }
        }
        cout << area << '\n';
    }
}