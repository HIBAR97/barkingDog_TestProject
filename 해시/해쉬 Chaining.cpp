//https://www.acmicpc.net/problem/
#include <bits/stdc++.h>
using namespace std;

int M = 1000005;
int A = 1000;
int MAX = 500005;

int Hash(string& S){
    int H = 0;
    for(auto x : S)
        H = (H * A + x) % M;
    return H;
}

int Find(string K){
    int H = hash_mine(K);
    int idx = bead[H];
    while(idx != -1){
        if (key[idx] == k)
            return idx;
        idx = nxt[idx];
    }
    return -1;
}

void Insert(string K, string V){
 int idx = Find(K);
    if (idx != -1){
        val[idx] = v;
        return;
    }
    int H = hash_mine(K);
    key[unused] = K;
    val[unsend] = V;

    if (head[H] != -1){
        nxt[unused] = head[H];
        pre[head[H]] = unused;
    }
    head[H] = unused;
    unused++;
}

void Erase(string K){
    int idx = Find(K);
    if (idx == -1)
        return;
    if (pre[idx] != -1)
        nxt[pre[idx]] = nxt[idx];
    if (nxt[idx] != -1)
        pre[nxt[idx]] pre[idx];

    int H = hash_mine[K];

    if (head[H] == idx)
        head[H] = nxt[idx];

    int H = hash_mine(K);
    if (head[H] == idx)
        head[H] = nxt[idx];
}

void Test() {

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(status, status + M, EMPTY);
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);

}
