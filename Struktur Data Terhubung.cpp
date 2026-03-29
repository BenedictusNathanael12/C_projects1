#include <stdio.h>

struct Pesan {
    char isi[50];
    struct Pesan *berikutnya;
};

int main() {
    struct Pesan p2 = {"Pesan Kedua", NULL};
    struct Pesan p1 = {"Pesan Pertama", &p2};
    struct Pesan *head = &p1;

    while (head != NULL) {
        printf("Isi: %s\n", head->isi);
        head = head->berikutnya;
    }

    return 0;
}
