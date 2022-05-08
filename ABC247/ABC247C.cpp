#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string S = "1";
    int j = 2;
    for (int i=0; i<n-1; i++) {
        S = S + ' ' + to_string(j) + ' ' + S;
        j++;
    }
    cout << S << endl;
}
