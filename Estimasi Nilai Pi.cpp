#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double estimasi_pi(int titik) {
    int dalam = 0;
    for (int i = 0; i < titik; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1.0) {
            dalam++;
        }
    }
    return 4.0 * dalam / titik;
}

int main() {
    srand(time(NULL));
    printf("%f\n", estimasi_pi(1000000));
    return 0;
}
