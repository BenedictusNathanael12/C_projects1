#include <stdio.h>

int main() {
    int saldo_awal = 100000;
    int beli_makan = 25000;
    int ongkos = 15000;
    int sisa_saldo = saldo_awal - (beli_makan + ongkos);
    printf("%d\n", sisa_saldo);
    return 0;
}
