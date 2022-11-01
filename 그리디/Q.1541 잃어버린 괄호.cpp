//https://www.acmicpc.net/problem/1541
#include <bits/stdc++.h>
using namespace std;

string temp = "";
string str;
int Result;
bool minus = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '\0'){
            if (minus)
                Result -= stoi(temp);
            else
                Result += stoi(temp);

            temp = "";
            if (str[i] == '-')
                minus = 1;
            else
                temp += str[i];
        }
    }
    cout << Result;
}