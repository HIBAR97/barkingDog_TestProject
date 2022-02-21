// https://www.acmicpc.net/problem/2667
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[30][30];
bool vis[30][30];
int x, y;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x;
    y = x;
    vector<int> Result;
    int Num = 0;

    for (int i = 0; i < x; i++){
        string st;
        cin >> st;
        for (int j = 0; j < x; j++) {
            board[i][j] = st[j] - '0';
        }
    }


    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            if (board[i][j] == 0 || vis[i][j])
                continue;

            Num++;
            queue<pair<int,int>> Q;
            vis[i][j] = 1;
            Q.push({i,j});

            int area = 0;

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
            Result.push_back(area);
            }
    }
    cout << Result.size() << "\n";
    sort(Result.begin(),Result.end());
    for (int j = 0; j < Result.size(); j++)
        cout << Result[j] << '\n';
}

