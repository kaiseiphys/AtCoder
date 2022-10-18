#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    // 入力
    int i;
    int A, B, D;
    cin >> A >> B >> D;
    vector <int> c(A, 0);
    for (i=0; i<A; i++) {
        cin >> c.at(i);
    }
    int X, Y, Z;
    cin >> X >> Y >> Z;

    // 計算
    for (int i = 0; i < q; i++) {
        while (true) {
            if ((m.at(i) * k.at(i)) % (n.at(i)) == 0) {
                break;
            }
            k.at(i)++;
        }
    }

    // 出力
    for (int i = 0; i < q; i++) {
        cout << k.at(i) << endl;
    }

    return 0;
}
