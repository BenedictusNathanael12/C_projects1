#include <stdio.h>
#define MAX 3

struct Mahasiswa {
    char nama[50];
    int nim;
    float nilai;
};

int main() {
    struct Mahasiswa mhs[MAX] = {
        {"Andi", 101, 88.5},
        {"Budi", 102, 92.0},
        {"Cici", 103, 79.5}
    };

    int idxTerbaik = 0;
    for (int i = 1; i < MAX; i++)
        if (mhs[i].nilai > mhs[idxTerbaik].nilai)
            idxTerbaik = i;

    printf("%-10s %-8s %-6s\n", "Nama", "NIM", "Nilai");
    printf("---------------------------\n");
    for (int i = 0; i < MAX; i++)
        printf("%-10s %-8d %.1f\n", mhs[i].nama, mhs[i].nim, mhs[i].nilai);

    printf("\nNilai tertinggi: %s (%.1f)\n",
           mhs[idxTerbaik].nama, mhs[idxTerbaik].nilai);
    return 0;
}
