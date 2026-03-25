#include <stdio.h>

void hanoi(int n, char dari, char ke, char bantu) {
    if (n == 1) {
        printf("Pindah disk 1 dari %c ke %c\n", dari, ke);
        return;
    }
    hanoi(n - 1, dari, bantu, ke);
    printf("Pindah disk %d dari %c ke %c\n", n, dari, ke);
    hanoi(n - 1, bantu, ke, dari);
}

int main() {
    int n = 3;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
