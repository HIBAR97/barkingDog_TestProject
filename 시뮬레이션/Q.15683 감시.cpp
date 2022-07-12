//https://www.acmicpc.net/problem/15683
#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N,M;
int Result = 0;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int Map[10][10];
int Vis[10][10];
vector<pair<int,int>> CCTV;

//범위 확인
bool Bounds (int a, int b){
    return a < 0 || a >= N || b < 0 || b >= M;
}

//벽이 있다면 7로 변경
void Update(int x, int y, int dir){
    dir %= 4;
    while (1){
        x += dx[dir];
        y += dy[dir];
        if (Bounds(x,y) || Vis[x][y] == 6)
            return;
        if (Vis[x][y] != 0)
            continue;
        Vis[x][y] = 7;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++){
            cin >> Map[i][j];
            if (Map[i][j] != 0 && Map[i][j] != 6)
                CCTV.push_back({i,j});

        }
    }


}