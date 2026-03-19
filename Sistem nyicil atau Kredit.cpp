#include <stdio.h>

int main() {
    float pinjaman, bungaTahun, bungaBulan, angsuran, sisaPokok, bunga, pokok, totalBunga = 0;
    int tenor, pilihan, i;
    float rate = 1.0;

    printf("=========================================\n");
    printf("        KALKULATOR CICILAN KREDIT\n");
    printf("=========================================\n");
    printf("Jenis Kredit:\n");
    printf("1. KPR (Ref. 9%%)\n");
    printf("2. KKB (Ref. 10.5%%)\n");
    printf("3. KTA (Ref. 14%%)\n");
    printf("Pilihan: ");
    scanf("%d", &pilihan);

    printf("\nJumlah pinjaman (Rp)  : ");
    scanf("%f", &pinjaman);
    printf("Bunga per tahun (%%)   : ");
    scanf("%f", &bungaTahun);
    printf("Tenor (bulan)         : ");
    scanf("%d", &tenor);

    if (pinjaman <= 0 || tenor <= 0 || bungaTahun < 0) {
        printf("ERROR: Input tidak valid!\n");
        return 1;
    }

    bungaBulan = bungaTahun / 100.0 / 12.0;

    if (bungaBulan == 0) {
        angsuran = pinjaman / tenor;
    } else {
        for (i = 0; i < tenor; i++) {
            rate *= (1 + bungaBulan);
        }
        angsuran = pinjaman * (bungaBulan * rate) / (rate - 1);
    }

    printf("\n=================================================================\n");
    printf("                    JADWAL CICILAN KREDIT\n");
    printf("=================================================================\n");
    printf("Pokok Pinjaman : Rp %.0f\n", pinjaman);
    printf("Angsuran/Bulan : Rp %.0f\n", angsuran);
    printf("-----------------------------------------------------------------\n");
    printf("%-6s %-15s %-15s %-15s %-15s\n", "Bulan", "Angsuran", "Pokok", "Bunga", "Sisa");
    printf("-----------------------------------------------------------------\n");

    sisaPokok = pinjaman;
    for (i = 1; i <= tenor; i++) {
        bunga = sisaPokok * bungaBulan;
        pokok = angsuran - bunga;
        sisaPokok -= pokok;
        totalBunga += bunga;

        if (sisaPokok < 0) sisaPokok = 0;

        printf("%-6d Rp %-12.0f Rp %-12.0f Rp %-12.0f Rp %-12.0f\n",
               i, angsuran, pokok, bunga, sisaPokok);
    }

    printf("=================================================================\n");
    printf("Total Pembayaran  : Rp %.0f\n", angsuran * tenor);
    printf("Total Bunga       : Rp %.0f\n", totalBunga);
    printf("=================================================================\n");

    return 0;
}
