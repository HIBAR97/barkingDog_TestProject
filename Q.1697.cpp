// https://www.acmicpc.net/problem/1697
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[100002];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    cin >> x >> y;

    fill(board, board + 100001, -1);
    board[x] = 0;
    
    queue<int> Q;
    Q.push(x);

    while (board[y] == -1){
        int cur = Q.front(); Q.pop();
        for (int nxt : {cur -1, cur + 1, 2 * cur}) {
            if (nxt < 0 || nxt > 100000)
                continue;
            if (board[nxt] != -1)
                continue;
            board[nxt] = board[cur] + 1;
            Q.push(nxt);
        }
    }
    cout << board[y];
}