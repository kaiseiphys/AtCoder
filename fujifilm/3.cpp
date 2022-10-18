#include <bits/stdc++.h>
using namespace std;

int main() {
    // 定義と入力
    int n, m, T;
    int h, i, j;
    int Location = 1;
    cin >> n >> m >> T;
    vector <int> u(m, 0), v(m, 0), w(m, 0);

    for (i=0; i<m; i++) {
        cin >> u.at(i) >> v.at(i) >> w.at(i);
    }

    // 同じ地点 u があった場合、カレー臭 w が弱い方の u を 0 にする。
    for (h=0; h<5; h++) {
        for (i=0; i<m; i++) {
            for (j=i+1; j<m; j++) {
                if (u.at(i)==u.at(j)) {
                    if (w.at(i)>=w.at(j)) {
                        u.at(j) = 0;
                    }
                    else {
                        u.at(i) = 0;
                    }
                    break;
                }
            }
        }
    }

    // T 秒後の Location を決定する。
    for (i=0; i<T; i++) {
        for (j=0; j<m; j++) {
            if (Location==u.at(j)) {
                Location = v.at(j);
                break;
            }
        }
    }

    // 出力
    cout << Location << endl;

    return 0;
}
