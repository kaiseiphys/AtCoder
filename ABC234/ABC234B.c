#include<stdio.h>
#include<math.h>

int main() {

    int n;
    scanf("%d", &n);

    int i, j;
    double x[n], y[n];
    double l[n][n];

    for (i=0; i<n; i++) {
        scanf("%lf %lf", &x[i], &y[i]);
    }

    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            l[i][j] = sqrt(pow((x[i]-x[j]), 2.0) + pow((y[i]-y[j]), 2.0));
        }
    }

    double max = 0.0;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (l[i][j] > max) {
                max = l[i][j];
            }
        }
    }

    printf("%10.10lf", max);

    return 0;

}
