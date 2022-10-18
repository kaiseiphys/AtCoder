#include <bits/stdc++.h>
// #include <string>
// #include <vector>
// #include <stdio.h>
// #include <stdlib.h>
using namespace std;

int main() {
	int H, W;

	cin >> H >> W;

    // vector <string> S(W, "s");
    vector <char> S(H*W, 's');
    // vector<vector<char> > S(H-1, vector<char>(W-1));

    // for (int i=0; i<H; i++) {
    //     for (int j=0; j<W; j++) {
    //         cin >> S.at(i).at(j);
    //     }
    // }

    // for (int i=0; i<H; i++) {
    //     for (int j=0; j<W; j++) {
    //         cout << S.at(i).at(j) << endl;
    //     }
    // }


    for (int i = 0; i < H*W; i++) {
        cin >> S.at(i);
    }

    int a, b;

    for (int i = 0; i < H*W; i++) {
        if (S.at(i) == 'o') {
            a = i;
            break;
        }
    }

    for (int i = 0; i < H*W; i++) {
        if (S.at(i) == 'o') {
            b = i;
        }
    }

    a = a + 1;
    b = b + 1;

    int xa, xb, ya, yb;

    if (a%W == 0) {
        xa = W;
        ya = a / W;
    }
    else {
        xa = a % W;
        ya = a / W + 1;
    }

    if (b%W == 0) {
        xb = W;
        yb = b / W;
    }
    else {
        xb = b % W;
        yb = b / W + 1;
    }

    cout << abs(xa-xb) + abs(ya-yb) << endl;

    // cout << a << " " << b << endl;
    // cout << xa << " " << ya << endl;
    // cout << xb << " " << yb << endl;

    // for (int i = 0; i < H*W; i++) {
    //     cout << S.at(i) << endl;
    // }

	return 0;
}
