#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector <int> n(q, 0), m(q, 0), k(q, 1);

    // 入力
    for (int i = 0; i < q; i++) {
        cin >> n.at(i) >> m.at(i);
    }

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
