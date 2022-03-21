#include<stdio.h>
#include<math.h>

int main() {

    int W, H;
    scanf("%d %d", &W, &H);

    int i, j;
    int a[W][H];

    for (i=0; i<W; i++) {
        for (j=0; j<H; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int b[H][W];

    for (i=0; i<W; i++) {
        for (j=0; j<H; j++) {
            b[j][i] = a[i][j];
        }
    }

    for (i=0; i<H; i++) {
        for (j=0; j<W; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
