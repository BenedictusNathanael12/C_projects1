#include <stdio.h>
#include <math.h>

double standar_deviasi(double data[], int n) {
    double sum = 0.0, mean, varians = 0.0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    mean = sum / n;
    for (int i = 0; i < n; i++) {
        varians += pow(data[i] - mean, 2);
    }
    varians /= n;
    return sqrt(varians);
}

int main() {
    double data[] = {4, 8, 6, 5, 3, 2, 8, 9, 2, 5};
    int n = sizeof(data) / sizeof(data[0]);
    printf("%f\n", standar_deviasi(data, n));
    return 0;
}
