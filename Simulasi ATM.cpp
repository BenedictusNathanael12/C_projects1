#include <stdio.h>
#include <string.h>

#define PIN_BENAR "1234"
#define MAX_PERCOBAAN 3

typedef struct {
    char nama[50];
    long long rekening;
    float saldo;
} Nasabah;

void cekSaldo(Nasabah *n) {
    printf("\n+---------------------------+\n");
    printf("|  Saldo Anda: Rp %10.0f  |\n", n->saldo);
    printf("+---------------------------+\n");
}

void tarikTunai(Nasabah *n) {
    float jumlah;
    printf("Jumlah penarikan (Rp): ");
    scanf("%f", &jumlah);

    if (jumlah <= 0 || (int)jumlah % 50000 != 0) {
        printf("ERROR: Jumlah harus kelipatan Rp 50.000\n");
    } else if (jumlah > n->saldo) {
        printf("ERROR: Saldo tidak mencukupi!\n");
    } else {
        n->saldo -= jumlah;
        printf("Ambil uang Rp %.0f di slot mesin.\n", jumlah);
        printf("Saldo tersisa: Rp %.0f\n", n->saldo);
    }
}

void transfer(Nasabah *n) {
    long long rekTujuan;
    float jumlah;
    printf("Nomor rekening tujuan: ");
    scanf("%lld", &rekTujuan);
    printf("Jumlah transfer (Rp): ");
    scanf("%f", &jumlah);

    if (jumlah > n->saldo) {
        printf("ERROR: Saldo tidak mencukupi!\n");
    } else {
        n->saldo -= jumlah;
        printf("Transfer Rp %.0f ke rek. %lld berhasil.\n", jumlah, rekTujuan);
        printf("Saldo tersisa: Rp %.0f\n", n->saldo);
    }
}

int main() {
    Nasabah user = {"Budi Santoso", 1234567890, 5000000};
    char pin[10];
    int percobaan = 0;

    printf("============================\n");
    printf("      SELAMAT DATANG ATM\n");
    printf("============================\n");

    while (percobaan < MAX_PERCOBAAN) {
        printf("Masukkan PIN: ");
        scanf("%s", pin);

        if (strcmp(pin, PIN_BENAR) == 0) {
            printf("\nSelamat datang, %s!\n", user.nama);
            int pilihan = 0;
            while (pilihan != 4) {
                printf("\n--- MENU UTAMA ---\n");
                printf("1. Cek Saldo\n");
                printf("2. Tarik Tunai\n");
                printf("3. Transfer\n");
                printf("4. Keluar\n");
                printf("Pilihan: ");
                scanf("%d", &pilihan);

                switch (pilihan) {
                    case 1: cekSaldo(&user); break;
                    case 2: tarikTunai(&user); break;
                    case 3: transfer(&user); break;
                    case 4: printf("Terima kasih. Selamat tinggal!\n"); break;
                    default: printf("Pilihan tidak valid!\n");
                }
            }
            return 0;
        } else {
            percobaan++;
            printf("PIN salah! Sisa percobaan: %d\n", MAX_PERCOBAAN - percobaan);
        }
    }

    printf("Kartu Anda diblokir! Hubungi bank.\n");
    return 0;
}
