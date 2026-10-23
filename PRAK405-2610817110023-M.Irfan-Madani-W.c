#include <stdio.h>

int main(void) {
    int n, k;

    scanf("%d %d", &n, &k);

    int grand_total = 0;

    for (int r = 1; r <= n; r++) {
        int row_total = 0;

        for (int j = r; j >= 1; j--) {
            printf("(%d * %d)", j, k);
            row_total += j * k;

            if (j != 1) {
                printf(" + ");
            }
        }

        printf(" = %d\n", row_total);
        grand_total += row_total;
    }

    printf("%d\n", grand_total);

    return 0;
}