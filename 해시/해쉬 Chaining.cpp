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

}

void Erase(string K){

}

void Test() {

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

}