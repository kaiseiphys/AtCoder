#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

    if ((a-b>=0) && (b-c>=0)) {
        cout << "Yes" << endl;
    }

    else if ((a-b<=0) && (b-c<=0)) {
        cout << "Yes" << endl;
    }

    else {
        cout << "No" << endl;
    }

	return 0;
}
