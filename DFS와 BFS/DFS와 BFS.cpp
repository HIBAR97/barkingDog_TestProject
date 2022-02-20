// https://www.acmicpc.net/problem/1260
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1002][1002];
bool vis[1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int n, m, v;
//stack<int> S; //DFS
queue<int> Q; //BFS

void DFS(int S){
    vis[S] = 1;
    cout << S << " ";
    for (int i = 0; i <= n; i++)
        if (board[S][i] == 1 && vis[i] == 0)
            DFS(i);
}

void BFS(int v){
    Q.push(v);
    vis[v] = 1;
    cout << v << " ";

    while (!Q.empty()){
        v = Q.front();
        Q.pop();

        for (int j = 0; j <= n; j++) {
            if (board[v][j] == 1 && vis[j] == 0){
                Q.push(j);
                vis[j] = 1;
                cout << j << " ";
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        board[x][y] = 1;
        board[y][x] = 1;
    }

    for (int i = 0; i <= n; i++) //reset
            vis[i] = 0;

    DFS(v);
    cout << "\n";

    for (int i = 0; i <= n; i++) //reset
        vis[i] = 0;

    BFS(v);
}