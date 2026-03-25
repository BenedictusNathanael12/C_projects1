#include <stdio.h>

void toBiner(int n) {
    if (n == 0) { printf("0"); return; }
    int bits[32], idx = 0;
    while (n > 0) {
        bits[idx++] = n % 2;
        n /= 2;
    }
    printf("Biner: ");
    for (int i = idx - 1; i >= 0; i--)
        printf("%d", bits[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &n);
    toBiner(n);
    return 0;
}
