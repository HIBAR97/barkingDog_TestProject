// https://www.acmicpc.net/problem/4179
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
short board;
int Fvis[1002][1002];
int Hvis[1002][1002];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y;
    cin >> x >> y;

    for (int i = 0; i < x; i++) {
        fill(Fvis[i], Fvis[i] + y, -1);
        fill(Hvis[i], Hvis[i] + y, -1);
    }

    for (int i = 0; i < x; i++)
            cin >> board[i];

    queue<pair<int, int> > Q1;
    queue<pair<int, int> > Q2;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(board[i][j] == 'F'){
                Q1.push({i,j});
                Fvis[i][j] = 0;
            }
            if(board[i][j] == 'J'){
                Q2.push({i,j});
                Hvis[i][j] = 0;
            }
        }
    }
    while (!Q1.empty()){
        auto cur = Q1.front(); Q1.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= x || ny < 0 || ny >= y)
                continue;
            if (Fvis[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            Fvis[nx][ny] = Fvis[cur.X][cur.Y] + 1;
            Q1.push({nx, ny});
        }
    }
    while (!Q2.empty()){
        auto cur = Q2.front(); Q2.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= x || ny < 0 || ny >= y){
                cout << Hvis[cur.X][cur.Y] + 1;
                return 0;
            }
            if (Hvis[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            if (Fvis[nx][ny] != -1 && Fvis[nx][ny] <= Hvis[cur.X][cur.Y] + 1)
                continue;
            Hvis[nx][ny] = Hvis[cur.X][cur.Y] + 1;
            Q2.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}