//https://www.acmicpc.net/problem/15683
#include <bits/stdc++.h>
using namespace std;
int N,M;
int Map[10][10];
int used[10][10];

//X, Y
int Right[4] = {1,0,0,0};
int Lift[4] = {0,1,0,0};
int Up[4] = {0,0,1,0};
int Down[4] = {0,0,0,1};

int CCTV[5] = {1,2,3,4,5};

int Direction = 0;

void func(int k){

    //CCTV 종류
    if (Direction == 1){
        
    } else if (Direction == 2){

    } else if (Direction == 3){

    }else if (Direction == 4){

    }else if (Direction == 5){

    }else if (Direction == 6){

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cin >> Map[j][i];
    }
    func(0);

}