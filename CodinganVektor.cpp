#include <stdio.h>
#include <math.h>

int main() {
    float A[4], B[4];

    printf("Inputlah komponen-komponen untuk vektor A:\n");
    for(int i = 1; i <= 3; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &A[i]);
    }

    printf("\nInputlah komponen-komponen untuk vektor B:\n");
    for(int i = 1; i <= 3; i++) {
        printf("B[%d] = ", i);
        scanf("%f", &B[i]);
    }

    float SA = 5*A[1] - 3*B[1];
    float SB = 5*A[2] - 3*B[2];
    float SC = 5*A[3] - 3*B[3];

    float TA = 4*A[1] + 7*B[1];
    float TB = 4*A[2] + 7*B[2];
    float TC = 4*A[3] + 7*B[3];

    float dot = A[1]*B[1] + A[2]*B[2] + A[3]*B[3];

    float magA = sqrt(A[1]*A[1] + A[2]*A[2] + A[3]*A[3]);
    float magB = sqrt(B[1]*B[1] + B[2]*B[2] + B[3]*B[3]);

    float cosTheta = dot / (magA * magB);
    float theta = acos(cosTheta) * 180 / 3.141592;

    float jarak = sqrt((B[1]-A[1])*(B[1]-A[1]) +
                       (B[2]-A[2])*(B[2]-A[2]) +
                       (B[3]-A[3])*(B[3]-A[3]));

    float Cx = A[2]*B[3] - A[3]*B[2];
    float Cy = A[3]*B[1] - A[1]*B[3];
    float Cz = A[1]*B[2] - A[2]*B[1];

    float Dx = -Cx;
    float Dy = -Cy;
    float Dz = -Cz;

    float magC = sqrt(Cx*Cx + Cy*Cy + Cz*Cz);

    float magD = sqrt(Dx*Dx + Dy*Dy + Dz*Dz);

    printf("\nA.) Hasil 5A - 3B dan 4A + 7B\n");
    printf("-> 5A - 3B = (%.2f, %.2f, %.2f)\n", SA, SB, SC);
    printf("-> 4A + 7B = (%.2f, %.2f, %.2f)\n", TA, TB, TC);

    printf("\nB.) A . B (Hasil kali titiknya adalah)\n");
    printf("-> A . B = %.2f\n", dot);

    printf("\nC.) Sudut antara vector A dan B\n");
    printf("-> Sudut(A,B) = %.2f derajat\n", theta);

    printf("\nD.) Jarak antara A dan B\n");
    printf("-> Jarak(A,B) = %.2f\n", jarak);

    printf("\nE.) A x B (Hasil kali silang vector A dan B)\n");
    printf("-> A x B = (%.2f, %.2f, %.2f)\n", Cx, Cy, Cz);

    printf("\nF.) B x A (Hasil kali silang vector B dan A)\n");
    printf("-> B x A = (%.2f, %.2f, %.2f)\n", Dx, Dy, Dz);

    printf("\nG.) ||A x B||\n");
    printf("-> A x B = %.2f\n", magC);

    printf("\nH.) ||B x A||\n");
    printf("-> B x A = %.2f\n", magD);

    return 0;
}