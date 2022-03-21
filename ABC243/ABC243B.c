#include<stdio.h>
#include<math.h>

int main() {

    int n, i;
    scanf("%d", &n);

    int a[n], b[n];

    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }

    int first = 0;
    for (i=0; i<n; i++) {
        if (a[i]==b[i]) {
            first++;
        }
    }

    printf("%d\n", first);

    int second = 0;
    int j;

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (a[i]==b[j]) {
                second++;
            }
        }
    }

    second = second - first;
    printf("%d\n", second);

    return 0;

}
