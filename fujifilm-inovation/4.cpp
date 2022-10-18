#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    // 入力
    int i, j;
    int N, K;
    int K_counter = 0;
    int X = 0;
    cin >> N >> K;
    vector <int> T(N, 0);
    vector <int> Q(N, 0);
    vector <int> ALL(N, 0);
    for (i=0; i<N; i++) {
        cin >> T.at(i) >> Q.at(i);
        ALL.at(i) = T.at(i) + Q.at(i);
    }

    int max = 0;
    for (i=0; i<N; i++) {
        if (ALL.at(i)>max) {
            max = ALL.at(i);
        }
    }

    vector <int> time(max, 1);
    for (X=0; X<max; X++) {
        // 初期化
        for (i=0; i<max; i++) {
            time.at(i)=1;
        }
        for (i=0; i<X; i++) {
            time.at(i) = 0;
        }
        for (i=0; i<N; i++) {
            for (j=T.at(i); j<(T.at(i)+Q.at(i)+X); j++) {
                time.at(j-1) = 0;
            }
        }
        for (i=0; i<max; i++) {
            cout << time.at(i) << endl;
        }

        for (i=0; i<max; i++) {
            if ((time.at(i)==1) && (time.at(i+1)==0)) {
                K_counter++;
            }
        }
        if (K_counter<K) {
            break;
        }
    }

    cout << "----------------" << endl;
    cout << X << endl;

    return 0;
}
