#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool doixung = true;
    int n = s.length();
    if(n == 1) cout << "Yes";
    for(int i = 0; i < n/2; ++i) {
        if(s[i] != s[n-i-1]) doixung = false;
    }
    if(doixung) cout << "yes";
    else cout << "no";
}