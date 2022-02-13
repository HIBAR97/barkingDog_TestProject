// https://www.acmicpc.net/problem/2178
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int bored[502][502];
bool vis[502][502];
bool dis[502][502];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y;

    cin >> x >> y;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            cin >> bored[i][j];

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++){
            if (bored[i][j] == 1 || vis[i][j] == 0)
                continue;


        }



}
