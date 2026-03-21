#include <stdio.h>

int main() {
    char teks[100];
    int panjang = 0;
    int i;

    printf("Masukkan sebuah kata: ");
    scanf("%s", teks);

    while(teks[panjang] != '\0') {
        panjang++;
    }

    printf("Kata setelah dibalik: ");
    for(i = panjang - 1; i >= 0; i--) {
        printf("%c", teks[i]);
    }
    printf("\n");

    return 0;
}
