// https://www.acmicpc.net/problem/2606
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[102][102];
bool vis[102] = {0,};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int x, y;
queue<int> Q;
int PcNum = 0;

void bfs(int v){
    Q.push(v);
    vis[v] = 1;

    while (!Q.empty()){
        v = Q.front(); Q.pop();

        for (int i = 1; i <= x; i++) {
            if (board[v][i] == 1 && vis[i] == 0){
                Q.push(i);
                vis[i] = 1;
                PcNum++;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> x >> y;

    for (int i = 0; i < y; i++) {
       int a, b;
       cin >> a >> b;
       board[a][b] = 1;
       board[b][a] = 1;
    }
    bfs(1);
    cout << PcNum;
}