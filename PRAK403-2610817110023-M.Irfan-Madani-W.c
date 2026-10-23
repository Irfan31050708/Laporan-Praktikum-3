#include <stdio.h>

int main(void) {
    int first, second;

    scanf("%d %d", &first, &second);

    if (first < second) {
        for (int a = first, b = second; a <= second; a++, b--) {
            printf("%d %d", a, b);
            if (a != second) {
                printf(" - ");
            }
        }
    } else {
        for (int a = first, b = second; a >= second; a--, b++) {
            printf("%d %d", a, b);
            if (a != second) {
                printf(" - ");
            }
        }
    }
    printf("\n");

    return 0;
}
