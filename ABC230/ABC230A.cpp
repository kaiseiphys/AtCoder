#include<stdio.h>
#include<math.h>

int main() {

    int n;
    scanf("%d", &n);

    if (n<10) {
        printf("AGC00%d", n);
    }

    if (n>=10) {
        if (n<100) {
            if (n<42) {
                printf("AGC0%d", n);
            }
            if (n>=42) {
                printf("AGC0%d", n+1);
            }
        }
        if (n>=100) {
            printf("AGC%d", n+1);
        }
    }




    return 0;

}
