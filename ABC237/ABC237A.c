#include<stdio.h>
#include<math.h>

int main() {

    long n;
    int res = scanf ("%ld", &n);

    if ((n >= -pow(2,31)) && (n < pow(2,31))) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;

}
