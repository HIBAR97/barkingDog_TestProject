// https://www.acmicpc.net/problem/10799
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<char> st;
    string Input;
    long long ans = 0;
    cin >> Input;

    int Size = Input.length();
    for (int i = 0; i < Size; i++) {
        if (Input[i] == '(')
            st.push(Input[i]);
        else{
            if (Input[i - 1] == '('){
                st.pop();
                ans += st.size();
            } else{
                st.pop();
                ans++;
            }
        }
    }
    cout << ans << "\n";

}