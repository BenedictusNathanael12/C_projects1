#include <stdio.h>

int main() {
    FILE *sumber = fopen("log.txt", "r");
    FILE *tujuan = fopen("backup.txt", "w");
    char c;

    if (sumber == NULL || tujuan == NULL) {
        printf("Gagal akses sistem.\n");
        return 1;
    }

    while ((c = fgetc(sumber)) != EOF) {
        fputc(c, tujuan);
    }

    fclose(sumber);
    fclose(tujuan);
    return 0;
}
