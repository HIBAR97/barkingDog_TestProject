//https://www.acmicpc.net/problem/
#include <bits/stdc++.h>
using namespace std;

int M = 1000005;
int A = 1000;
int MAX = 500005;

int Hash(string& S){
    int H = 0;
    for(auto x : S)
        H = (H * A + X) % M;
    return H;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

}