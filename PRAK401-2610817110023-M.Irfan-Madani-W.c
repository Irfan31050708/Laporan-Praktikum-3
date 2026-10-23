#include <stdio.h>

int main() {
    int multiple;
    char symbol;

    scanf("%d", &multiple);
    scanf(" %c", &symbol);

    for (int i = 1; i <= 50; i++) {
        if (i % multiple == 0) {
            printf("%c ", symbol);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}