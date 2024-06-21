#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, n, m;

    printf("\nIngrese el valor de A (debe ser mayor a 1): ");
    scanf("%d", &a);
    if (a <= 1) {
        printf("\nEl valor de A debe ser mayor a 1.\n");
        return 1;
    }

    printf("\nIngrese el valor de B (debe ser mayor a 1): ");
    scanf("%d", &b);
    if (b <= 1) {
        printf("\nEl valor de B debe ser mayor a 1.\n");
        return 1;
    }

    printf("\nIngrese la cantidad de multiplos de A que desea mostrar: ");
    scanf("%d", &n);

    printf("\nIngrese la cantidad de multiplos impares de B que desea mostrar: ");
    scanf("%d", &m);

    printf("\nLos primeros %d multiplos de %d son:\n", n, a);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * a);
    }
    printf("\n");

    printf("\nLos primeros %d multiplos impares de %d son:\n", m, b);
    for (int i = 1, count = 0; count < m; i++) {
        int multiple = i * b;
        if (multiple % 2 != 0) {
            printf("%d ", multiple);
            count++;
        }
    }
    printf("\n");

    return 0;
}
