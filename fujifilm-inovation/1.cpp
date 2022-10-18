#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int digit(string s) {
    if (s=="1" || s=="2" || s=="3" || s=="4" || s=="5" || s=="6" || s=="7" || s=="8" || s=="9" || s=="0") {
        int a = 1;
        return a;
    }
    else {
        int a = 0;
        return a;
    }
}

int main() {
    int i, j;
    string s;
    getline(cin, s);
    string str = "";
    int Number = s.length();
    int x = 0;
    int y;

    for (i=0; i<Number; i++) {
        if (s.substr(i,1)!=" ") {
            str = str + s.substr(i,1);
        }
    }

    for (i=0; i<Number-7; i++) {
        if (digit(s.substr(i,1))==1 && digit(s.substr(i+1,1))==1 && digit(s.substr(i+2,1))==1 && (s.substr(i+3,1)=="-") && digit(s.substr(i+4,1))==1 && digit(s.substr(i+5,1))==1 && digit(s.substr(i+6,1))==1 && digit(s.substr(i+7,1))==1) {
            x = 1;
            y = i;
            break;
        }
    }

    if (x==1) {
        cout << s.substr(y,1) << s.substr(y+1,1) << s.substr(y+2,1) << s.substr(y+4,1) << s.substr(y+5,1) << s.substr(y+6,1) << s.substr(y+7,1) << endl;
    }

    else {
        cout << "FORMAT ERROR" << endl;
    }

    return 0;
}
