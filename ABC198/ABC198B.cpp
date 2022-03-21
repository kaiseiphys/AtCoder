#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  while (N % 10 == 0) {
    N /= 10;
  }

  if (N < 10) {
    cout << "Yes" << endl;
  }

  else if (10 < N < 100) {
    if (N % 11 == 0) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  else if (100 < N < 1000) {
    if (N % 10 == N / 100) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  else if (1000 < N < 10000) {
    if (N == N / 1000 && N / 10 == N / 100) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  else if (10000 < N < 100000) {
    if (N == N / 10000 && N / 10 == N / 1000) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  else if (100000 <= N < 1000000) {
    if (N == N / 100000 && N / 10 == N / 10000 && N / 100 == N / 1000) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  else if (1000000 < N < 10000000) {
    if (N == N / 1000000 && N / 10 == N / 100000 && N / 100 == N / 10000) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  else if (10000000 < N < 100000000) {
    if (N == N / 10000000 && N / 10 == N / 1000000 && N / 100 == N / 100000 && N / 1000 == N / 10000) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  else if (100000000 < N < 1000000000) {
    if (N == N / 100000000 && N / 10 == N / 10000000 && N / 100 == N / 1000000 && N / 1000 == N / 100000) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  else {
    cout << "No" << endl;
  }
}
