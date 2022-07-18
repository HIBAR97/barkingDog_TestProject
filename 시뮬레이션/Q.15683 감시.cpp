//https://www.acmicpc.net/problem/15683
#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int N,M;
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
    int Result = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++){
            cin >> Map[i][j];
            if (Map[i][j] != 0 && Map[i][j] != 6)
                CCTV.push_back({i,j});
            if (Map[i][j] == 0)
                Result++;
        }
    }

    for (int tmp = 0; tmp < (1 << (2*CCTV.size())); tmp++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) 
                Vis[i][j] = Map[i][j];
        }
        int Brute = tmp;
        for (int i = 0; i < CCTV.size(); i++) {
            int dir = Brute % 4;
            Brute /= 4;
            int x = CCTV[i].X;
            int y = CCTV[i].Y;
         if (Map[x][y] == 1){
             Update(x,y,dir);
         }else if (Map[x][y] == 2){
             Update(x,y,dir);
             Update(x,y,dir+2);
         }else if(Map[x][y] == 3){
             Update(x,y,dir);
             Update(x,y,dir+1);
         }else if(Map[x][y] == 4){
             Update(x,y,dir);
             Update(x,y,dir+1);
             Update(x,y,dir+2);
         }else{
             Update(x,y,dir);
             Update(x,y,dir+1);
             Update(x,y,dir+2);
             Update(x,y,dir+3);
         }
        }
        int val = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                val += (Vis[i][j] == 0);
            }
        }
        Result = min(Result, val);
    }
    cout << Result;
}