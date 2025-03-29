#include <stdio.h>

int main() {
    printf("Digite um numero\n");
    fflush(stdout);

    int numero;
    scanf("%d", &numero);
    fflush(stdout);

    int ehPrimo = 1;

    for(int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            ehPrimo = 0;
            break;
        }
    }

    if (ehPrimo == 1) {
        printf("Numero primo\n");
        fflush(stdout);
    } else {
        printf("Numero nao eh primo\n");
        fflush(stdout);
    }

    system("pause");

    return 0;
}