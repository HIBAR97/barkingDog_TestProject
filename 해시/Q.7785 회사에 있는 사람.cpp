//https://www.acmicpc.net/problem/7785
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    string Name, log;

    unordered_set<string> s;

    cin >> N;

    while (N--){
        cin >> Name >> log;

        if (log == "enter")
            s.insert(Name);
        else
            s.erase(Name);
    }

    vector<string> Result(s.begin(), s.end());
    sort(Result.begin(), Result.end(), greater<string>());

    for(auto x : Result)
        cout << x << '\n';


}
