#include <stdio.h>

void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {
    int number = 42;
    printf("Desimal: %d\nBiner  : ", number);
    printBinary(number);
    
    return 0;
}
