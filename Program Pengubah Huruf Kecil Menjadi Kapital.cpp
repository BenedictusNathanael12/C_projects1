#include <stdio.h>

int main() {
    char kata[100];
    int i = 0;

    printf("Masukkan kata dalam huruf kecil: ");
    scanf("%s", kata);

    while(kata[i] != '\0') {
        if(kata[i] >= 'a' && kata[i] <= 'z') {
            kata[i] = kata[i] - 32;
        }
        i++;
    }

    printf("Hasil kapital: %s\n", kata);

    return 0;
}
