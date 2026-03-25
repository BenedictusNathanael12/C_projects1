#include <stdio.h>

void enkripsi(char* teks, int shift) {
    for (int i = 0; teks[i]; i++) {
        if (teks[i] >= 'a' && teks[i] <= 'z')
            teks[i] = (teks[i] - 'a' + shift) % 26 + 'a';
        else if (teks[i] >= 'A' && teks[i] <= 'Z')
            teks[i] = (teks[i] - 'A' + shift) % 26 + 'A';
    }
}

int main() {
    char pesan[] = "Hello World";
    int shift = 3;
    printf("Asli     : %s\n", pesan);
    enkripsi(pesan, shift);
    printf("Enkripsi : %s\n", pesan);
    enkripsi(pesan, 26 - shift);
    printf("Dekripsi : %s\n", pesan);
    return 0;
}
