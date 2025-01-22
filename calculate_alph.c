#include <stdio.h>
#include <math.h>

int main() {
    double alpha, beta, z1, z2;

    // Введення значень alpha і beta
    printf("Enter the value of alpha (in radians): ");
    scanf("%lf", &alpha);
    printf("Enter the value of beta (in radians): ");
    scanf("%lf", &beta);

    // Обчислення z1
    z1 = pow(cos(alpha) - cos(beta), 2) - pow(sin(alpha) - sin(beta), 2);

    // Обчислення z2
    double half_diff = (alpha - beta) / 2;
    z2 = -4 * pow(sin(half_diff), 2) * cos(alpha + beta);

    // Виведення результатів
    printf("z1 = %.6lf\n", z1);
    printf("z2 = %.6lf\n", z2);

    return 0;
}
