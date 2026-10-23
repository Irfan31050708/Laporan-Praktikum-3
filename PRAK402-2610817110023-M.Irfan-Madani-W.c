#include <stdio.h>

int main(void) {
    int limit;

    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    for (int i = limit; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}