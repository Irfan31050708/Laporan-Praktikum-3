#include <stdio.h>

int main(void) {
    int choice;

    do {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
            double first, second, result;

            printf("Masukkan nilai pertama : ");
            scanf("%lf", &first);
            printf("Masukkan nilai kedua : ");
            scanf("%lf", &second);

            if (choice == 1) {
                result = first + second;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", first, second, result);
            } else if (choice == 2) {
                result = first - second;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", first, second, result);
            } else if (choice == 3) {
                result = first * second;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", first, second, result);
            } else {
                result = first / second;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", first, second, result);
            }
        } else if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Irfan Madani Wahidun\n");
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    } while (choice != 5);

    return 0;
}