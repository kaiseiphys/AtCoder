#include<stdio.h>
#include<math.h>

int main() {

    int v, a, b, c;
    scanf("%d %d %d %d", &v, &a, &b, &c);

    int d = a + b + c;
    int e = v / d;

    int f = v - d * e;

    if (f<a) {
        printf("F");
    }

    else if (f-a<b) {
        printf("M");
    }

    else if (f-a-b<c) {
        printf("T");
    }

    return 0;

}
