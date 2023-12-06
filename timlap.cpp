#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> number;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        number[num]++;
    }

    for(auto &pair : number) {
        if(pair.second > 1) {
            cout << "yes";
            return 0;
        }
    }
    cout << "no";
    return 0;
}