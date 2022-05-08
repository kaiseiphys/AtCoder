#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
    int n, a, x, c;
    cin >> n;
    string S;
    int output = 0;
    string s;
    int num;

    for (int i=0; i<n; i++) {
        cin >> a;
        if (a == 1) {
            cin >> x >> c;
            S = to_string(x);
            for (int j=1; j<c; j++) {
                S = S + to_string(x);
            }
        }
        if (a == 2) {
            cin >> c;
            for (int k=0; k<c; k++) {
                s = S.at(k);
                num = stoi(s);
                output = output + num;
                cout << output << endl;
            }
        }
    }

    // s = "1";
    // cout << s << endl;
    // num = stoi(s);
    // cout << num << endl;
}
