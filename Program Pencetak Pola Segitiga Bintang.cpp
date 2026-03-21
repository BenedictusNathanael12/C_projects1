#include <stdio.h>

int main() {
    int baris;
    int i;
    int j;

    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);

    for(i = 1; i <= baris; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
