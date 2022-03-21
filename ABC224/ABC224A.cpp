#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int size = S.size();

    if (S.at(size - 1) == 'r') {
        cout << S.at(size - 2) << S.at(size - 1) << endl;
    }

    if (S.at(size - 1) == 't') {
        cout << S.at(size - 3) << S.at(size - 2) << S.at(size - 1) << endl;
    }
}
