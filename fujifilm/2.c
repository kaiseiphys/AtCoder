#include<stdio.h>
#include<math.h>

int main() {
    // 定義
    int q, i;
    int n[q], m[q], k[q];

    // 入力
    scanf("%d", &q);
    for (i=0; i<q; i++) {
        scanf("%d %d", &n[i], &m[i]);
    }

    // 計算
    for (i=0; i<q; i++) {
        while(1<2) {
            if ((m[i] * k[i]) % (n[i]) == 0) {
                break;
            }
            k[i]++;
        }
    }

    // 出力
    for (i=0; i<q; i++) {
        printf("%d", k[i]);
    }

    return 0;
}
