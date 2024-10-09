
#include <stdio.h>
#include <stdbool.h>

void crivo(int n) {
    bool ehPrimo[n + 1];
    for (int i = 0; i <= n; i++) {
        ehPrimo[i] = true; // Inicialmente, todos são considerados primos
    }
    ehPrimo[0] = ehPrimo[1] = false; // 0 e 1 não são primos

    for (int p = 2; p * p <= n; p++) {
        if (ehPrimo[p]) {
            for (int i = p * p; i <= n; i += p) {
                ehPrimo[i] = false; // Marcando múltiplos de p como não primos
            }
        }
    }

    // Exibindo números primos
    for (int i = 2; i <= n; i++) {
        if (ehPrimo[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n); // Entrada do valor n
    printf("Números primos até %d:\n", n);
    crivo(n);
    return 0;
}