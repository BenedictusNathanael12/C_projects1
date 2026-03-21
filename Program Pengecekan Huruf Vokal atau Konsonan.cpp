#include <stdio.h>

int main() {
    char huruf;

    printf("Masukkan sebuah huruf: ");
    scanf(" %c", &huruf);

    if(huruf == 'A' || huruf == 'a' || huruf == 'E' || huruf == 'e' ||
       huruf == 'I' || huruf == 'i' || huruf == 'O' || huruf == 'o' ||
       huruf == 'U' || huruf == 'u') {
        printf("Huruf tersebut adalah Vokal.\n");
    } else {
        printf("Huruf tersebut adalah Konsonan.\n");
    }

    return 0;
}
