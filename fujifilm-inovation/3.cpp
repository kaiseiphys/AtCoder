#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    // 入力
    int i;
    int counter = 0;
    int T;
    cin >> T;
    vector <int> V(T, 0);
    for (i=0; i<T; i++) {
        cin >> V.at(i);
    }

    // 計算と出力
    for (i=0; i<T; i++) {
        if ((V.at(i)>110) && (V.at(i+1)>110) && (V.at(i+2)>110) && (V.at(i+3)>110) && (V.at(i+4)>110)){
            cout << "Too High Voltage" << endl;
            cout << i+5 << endl;
            counter++;
            break;
        }
        else if ((V.at(i)<90) && (V.at(i+1)<90) && (V.at(i+2)<90) && (V.at(i+3)<90) && (V.at(i+4)<90) && (V.at(i+5)<90) && (V.at(i+6)<90) && (V.at(i+7)<90) && (V.at(i+8)<90) && (V.at(i+9)<90) && (V.at(i+10)<90) && (V.at(i+11)<90) && (V.at(i+12)<90) && (V.at(i+13)<90) && (V.at(i+14)<90) && (V.at(i+15)<90) && (V.at(i+16)<90) && (V.at(i+17)<90) && (V.at(i+18)<90) && (V.at(i+19)<90)){
            cout << "Too Low Voltage" << endl;
            cout << i+20 << endl;
            counter++;
            break;
        }
    }

    if (counter==0){
        cout << "No Problem" << endl;
    }

    return 0;
}
