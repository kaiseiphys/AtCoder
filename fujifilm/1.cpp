#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;

    if (s.size()!=4) {
        cout << "Reject" << endl;
    }

    else {
        if (isdigit(s.at(0)) && isdigit(s.at(1)) && isdigit(s.at(2)) && isdigit(s.at(3))) {
            if (s.at(0)==s.at(1) && s.at(1)==s.at(2) && s.at(2)==s.at(3)) {
                cout << "Reject" << endl;
            }
            else {
                cout << "Accept" << endl;
            }
        }
        else {
            cout << "Reject" << endl;
        }
    }

    return 0;
}
