#include <stdio.h>

int main() {
    char *menu[] = {"1. Profil", "2. Pengaturan", "3. Keluar"};
    int pilihan;
    int i;

    for (i = 0; i < 3; i++) {
        printf("%s\n", *(menu + i));
    }

    printf("Pilih: ");
    scanf("%d", &pilihan);
    printf("Menuju ke: %s\n", menu[pilihan - 1]);

    return 0;
}
