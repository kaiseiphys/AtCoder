#include<stdio.h>
#include<math.h>

int func(int t) {
    int y;
    y = t*t + 2*t + 3;
    return y;
}

int main() {

    int t;
    scanf("%d", &t);

    int a, b, c, d, e;

    c = func(t);
    d = func(c);
    a = func(t) + t;
    b = func(a);

    e = func(b+d);

    printf("%d", e);

    return 0;

}
