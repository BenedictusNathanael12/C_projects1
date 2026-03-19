#include <stdio.h>

int main() {
    char namaProduk[100];
    float harga, subtotal, diskon = 0, ongkir = 0, total;
    int qty, pilihanKota, pilihanVoucher, metodeBayar;

    printf("========================================\n");
    printf("         CHECKOUT BELANJA ONLINE\n");
    printf("========================================\n");

    printf("Nama produk  : ");
    scanf(" %[^\n]s", namaProduk); 
    printf("Harga satuan : Rp ");
    scanf("%f", &harga);
    printf("Jumlah       : ");
    scanf("%d", &qty);

    printf("\n--- PILIH KOTA TUJUAN ---\n");
    printf("1. Jakarta  (Rp 10.000)\n");
    printf("2. Bandung  (Rp 15.000)\n");
    printf("3. Surabaya (Rp 20.000)\n");
    printf("4. Lainnya  (Rp 25.000)\n");
    printf("Pilihan (1-4): ");
    scanf("%d", &pilihanKota);

    if (pilihanKota == 1) ongkir = 10000;
    else if (pilihanKota == 2) ongkir = 15000;
    else if (pilihanKota == 3) ongkir = 20000;
    else ongkir = 25000;

    printf("\n--- KODE VOUCHER ---\n");
    printf("1. HEMAT10 (Diskon 10%%)\n");
    printf("2. Tanpa Voucher\n");
    printf("Pilihan (1-2): ");
    scanf("%d", &pilihanVoucher);

    subtotal = harga * qty;

    if (pilihanVoucher == 1) {
        diskon = subtotal * 0.10;
        printf("Voucher valid! Anda mendapat diskon 10%%\n");
    }

    total = subtotal - diskon + ongkir;

    printf("\n--- RINCIAN BELANJA ---\n");
    printf("Subtotal  : Rp %.0f\n", subtotal);
    printf("Diskon    : Rp %.0f\n", diskon);
    printf("Ongkir    : Rp %.0f\n", ongkir);
    printf("-----------------------\n");
    printf("TOTAL     : Rp %.0f\n", total);

    printf("\n--- PILIH METODE PEMBAYARAN ---\n");
    printf("1. Transfer Bank\n");
    printf("2. Dompet Digital (GoPay/OVO/Dana)\n");
    printf("3. Bayar di Tempat (COD)\n");
    printf("Pilihan (1-3): ");
    scanf("%d", &metodeBayar);

    int noOrder = 123456; 

    printf("\n========================================\n");
    printf("         RINGKASAN PEMBAYARAN\n");
    printf("========================================\n");
    printf("No. Order   : ORD-%d\n", noOrder);
    printf("Total Bayar : Rp %.0f\n", total);

    if (metodeBayar == 1) {
        printf("Metode      : Transfer Bank (BCA 1234-5678-90)\n");
    } else if (metodeBayar == 2) {
        printf("Metode      : Dompet Digital (Scan QR Code)\n");
    } else if (metodeBayar == 3) {
        printf("Metode      : COD (Bayar saat paket tiba)\n");
    } else {
        printf("Metode pembayaran tidak valid!\n");
    }
    
    printf("========================================\n");
    printf("Pesanan Anda sedang diproses.\n");

    return 0;
}
