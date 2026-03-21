#include <stdio.h>

int main() {
    char jawaban;

    printf("Siapa penemu bahasa pemrograman C?\n");
    printf("A. James Gosling\n");
    printf("B. Dennis Ritchie\n");
    printf("C. Guido van Rossum\n");
    printf("Jawaban Anda (A/B/C): ");
    scanf(" %c", &jawaban);

    if(jawaban == 'B' || jawaban == 'b') {
        printf("Jawaban Anda Benar!\n");
    } else {
        printf("Jawaban Anda Salah!\n");
    }

    return 0;
}
