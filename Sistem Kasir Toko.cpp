#include <stdio.h>
#include <string.h>

#define MAX_ITEM 10

typedef struct {
    char nama[50];
    float harga;
    int qty;
} Barang;

void cetakStruk(Barang barang[], int jml, float total, float bayar) {
    printf("\n====================================\n");
    printf("       STRUK PEMBAYARAN TOKO\n");
    printf("====================================\n");
    printf("%-20s %5s %10s\n", "Nama Barang", "Qty", "Subtotal");
    printf("------------------------------------\n");
    for (int i = 0; i < jml; i++) {
        float subtotal = barang[i].harga * barang[i].qty;
        printf("%-20s %5d %10.0f\n", barang[i].nama, barang[i].qty, subtotal);
    }
    printf("====================================\n");
    printf("%-26s %10.0f\n", "TOTAL", total);
    printf("%-26s %10.0f\n", "BAYAR", bayar);
    printf("%-26s %10.0f\n", "KEMBALIAN", bayar - total);
    printf("====================================\n");
    printf("     Terima kasih atas kunjungan!\n");
    printf("====================================\n\n");
}

int main() {
    Barang keranjang[MAX_ITEM];
    int jmlBarang = 0;
    float total = 0;
    char lanjut = 'y';

    printf("====================================\n");
    printf("       SISTEM KASIR TOKO\n");
    printf("====================================\n");

    while (lanjut == 'y' && jmlBarang < MAX_ITEM) {
        printf("\nMasukkan nama barang: ");
        scanf("%s", keranjang[jmlBarang].nama);
        printf("Harga satuan (Rp): ");
        scanf("%f", &keranjang[jmlBarang].harga);
        printf("Jumlah: ");
        scanf("%d", &keranjang[jmlBarang].qty);

        total += keranjang[jmlBarang].harga * keranjang[jmlBarang].qty;
        jmlBarang++;

        printf("Tambah barang lagi? (y/n): ");
        scanf(" %c", &lanjut);
    }

    printf("\nTotal belanja: Rp %.0f\n", total);
    float bayar;
    printf("Jumlah bayar (Rp): ");
    scanf("%f", &bayar);

    if (bayar < total) {
        printf("ERROR: Pembayaran kurang!\n");
    } else {
        cetakStruk(keranjang, jmlBarang, total, bayar);
    }

    return 0;
}
