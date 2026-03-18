#include <stdio.h>
#include <math.h>
#include <complex.h>

void cari_akar(double a, double b, double c) {
    double d = (b * b) - (4 * a * c);
    double complex d_complex = d;
    double complex x1 = (-b - csqrt(d_complex)) / (2 * a);
    double complex x2 = (-b + csqrt(d_complex)) / (2 * a);
    printf("%f%+fi, %f%+fi\n", creal(x1), cimag(x1), creal(x2), cimag(x2));
}

int main() {
    cari_akar(1, 4, 5);
    return 0;
}
