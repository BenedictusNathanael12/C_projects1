#include <stdio.h>

int main() {
    char nopol[20][15];
    int jenis[20], jamMasuk[20], menitMasuk[20], terisi[20] = {0};
    int pilihan = 0, i, idx, jamKeluar, menitKeluar, totalMenit, jamParkir;
    float biaya, bayar;
    char tempNopol[15];

    while (pilihan != 4) {
        printf("\n--- SISTEM PARKIR ---\n");
        printf("1. Masuk\n2. Keluar\n3. Status\n4. Selesai\nPilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            idx = -1;
            for (i = 0; i < 20; i++) {
                if (!terisi[i]) {
                    idx = i;
                    break;
                }
            }

            if (idx == -1) {
                printf("Parkir Penuh!\n");
            } else {
                printf("No Polisi: ");
                scanf("%s", nopol[idx]);
                printf("Jenis (1.Motor, 2.Mobil, 3.Truk): ");
                scanf("%d", &jenis[idx]);
                printf("Jam Masuk (0-23): ");
                scanf("%d", &jamMasuk[idx]);
                printf("Menit Masuk (0-59): ");
                scanf("%d", &menitMasuk[idx]);
                terisi[idx] = 1;
                printf("Berhasil di slot %d\n", idx + 1);
            }
        } 
        else if (pilihan == 2) {
            printf("No Polisi: ");
            scanf("%s", tempNopol);
            idx = -1;
            for (i = 0; i < 20; i++) {
                if (terisi[i]) {
                    int match = 1;
                    for (int j = 0; tempNopol[j] != '\0' || nopol[i][j] != '\0'; j++) {
                        if (tempNopol[j] != nopol[i][j]) {
                            match = 0;
                            break;
                        }
                    }
                    if (match) {
                        idx = i;
                        break;
                    }
                }
            }

            if (idx == -1) {
                printf("Tidak ditemukan!\n");
            } else {
                printf("Jam Keluar: ");
                scanf("%d", &jamKeluar);
                printf("Menit Keluar: ");
                scanf("%d", &menitKeluar);

                totalMenit = (jamKeluar * 60 + menitKeluar) - (jamMasuk[idx] * 60 + menitMasuk[idx]);
                if (totalMenit <= 0) totalMenit = 60;
                jamParkir = (totalMenit + 59) / 60;

                if (jenis[idx] == 1) biaya = jamParkir * 3000;
                else if (jenis[idx] == 2) biaya = jamParkir * 5000;
                else biaya = jamParkir * 10000;

                printf("Biaya: Rp %.0f\nBayar: Rp ", biaya);
                scanf("%f", &bayar);
                if (bayar >= biaya) {
                    printf("Kembali: Rp %.0f\n", bayar - biaya);
                    terisi[idx] = 0;
                } else {
                    printf("Uang kurang!\n");
                }
            }
        } 
        else if (pilihan == 3) {
            printf("\nStatus Slot:\n");
            for (i = 0; i < 20; i++) {
                if (terisi[i]) printf("[%d] %s (Masuk %02d:%02d)\n", i + 1, nopol[i], jamMasuk[i], menitMasuk[i]);
            }
        }
    }
    return 0;
}
