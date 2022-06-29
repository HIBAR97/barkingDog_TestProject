// https://www.acmicpc.net/problem/2206
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
char board;
int vis[1002][1002][2];
int dis[1002][1002];
int N, M;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    cin >> board;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {

            if (board == 0 ||vis[i][j])
                continue;

            queue<pair<pair<int, int>,int>> Q ;
            Q.push({{0,0},{1}});
            vis[0][0][1] = 1;

            while (!Q.empty()){
                auto cur = Q.front(); Q.pop();
                if (cur.first.first == N - 1 && cur.first.second == M - 1){
                    cout << vis[N-1][M-1][cur.second];
                }
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first.first + dx[dir];
                    int ny = cur.first.second + dy[dir];
                    int power = cur.second;
                    if (nx < 0 || nx >= N || ny < 0 || ny >= M || vis[ny][nx][power])
                        continue;
                    else{
                        if(power && dis[ny][nx] == 1){
                            Q.push({{ny,nx},power - 1});
                            vis[ny][nx][power - 1] = vis[cur.first.first][cur.first.second][power] + 1;
                        }
                        if (dis[ny][nx] == 0){
                            Q.push({{ny,nx},power});
                            vis[ny][nx][power] = vis[cur.first.first][cur.first.second][power] + 1;
                        }
                    }
//                    if (board != 1 || vis[nx][ny])
//                        continue;
//                    vis[i][j] = dis[nx][ny] + 1;
//                    Q.push({nx, ny});
//                    vis[nx][ny] = 1;
                }
            }
//            Q.push({N - 1, M - 1});
//            dis[N-1][M-1] = 1;
        }
        return -1;
    }
//    int cnt = 0;
//    if (dis[0][0] >= 0)
//        cnt = dis[0][0];
//    for (int i = 0; i < N; i++){
//        for (int j = 0; j < M; j++){
//            if(vis[i][j] == 0)
//                continue;
//        }
//    }
//    cout << "1";
}