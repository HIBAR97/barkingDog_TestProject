//https://www.acmicpc.net/problem/1541
#include <bits/stdc++.h>
using namespace std;

int Num_arr[55];
string Mass_arr[55];
string temp;
string str;
int Result;
bool minus = false;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '\n')
            if (minus){
                Result -= stoi(temp);
            }
            else
                Result += stoi(temp);
            temp = "";

        if (str[i] == '-'){
            minus = true;
        }
        else
            temp += str[i];

    }
    cout << Result;
}