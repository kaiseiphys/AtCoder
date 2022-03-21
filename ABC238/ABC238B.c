#include<stdio.h>
#include<math.h>

int main() {

    long N;
    scanf("%ld", &N);

    int num = N;

    int digit = 0;
    while (num!=0) {
        num /= 10;
        digit++;
    }

    long A = 0;
    int i, j;

    for (i=0; i<digit-1; i++) {
        for (j=pow(10,i); j<pow(10,i+1); j++) {
            A += j - pow(10,i) + 1;
        }
    }

    for (j=pow(10,digit-1); j<N+1; j++) {
        A += j - pow(10,digit-1) + 1;
    }

    long B = A % 998244353;
    printf("%ld\n", B);

    return 0;
}
