#include <stdio.h>

int main() {
    int jumlah_mahasiswa = 35;
    int ukuran_kelompok = 4;
    int mahasiswa_sisa = jumlah_mahasiswa % ukuran_kelompok;
    printf("%d\n", mahasiswa_sisa);
    return 0;
}
