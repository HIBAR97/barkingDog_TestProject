//https://www.acmicpc.net/step/34
//permutation 함수사용
#include <bits/stdc++.h>
using namespace std;
int N,M;
vector<int> V;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++)
        //V[i] = 0;
        V.push_back(i < M ? 0 : 1);

//    for (int i = 0; i < M; i++)
//        V.push_back(0);

    do {
        for (int i = 0; i < N; i++)
            if(V[i] == 0)
                cout << i+1 << ' ';
        cout << '\n';
    }while(next_permutation(V.begin(),V.end()));
}