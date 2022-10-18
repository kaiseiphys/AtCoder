#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;

    vector <int> vec (n,0);
    for (int i=0; i<n; i++) {
        vec.at(i) = i;
    }

    for (int i=0; i<n; i++) {
        if ((i%a==0) || (i%b==0) || (i%(a*b)==0)) {
            vec.at(i) = 0;
        }
    }

    int counter = 0;

    for (int i=0; i<n; i++) {
        counter = counter + vec.at(i);
    }

    cout << counter << endl;

    // int a_counter = 0;
    // int b_counter = 0;
    // int ab_counter = 0;

    // for (int i=0; i<n; i++) {
    //     if (i%a==0) {
    //         a_counter++;
    //     }
    // }

    // for (int i=0; i<n; i++) {
    //     if (i%b==0) {
    //         b_counter++;
    //     }
    // }

    // for (int i=0; i<n; i++) {
    //     if (i%(a*b)==0) {
    //         ab_counter++;
    //     }
    // }


	return 0;
}
