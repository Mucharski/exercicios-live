#include <stdio.h>

int main() {
   printf("Digite um numero\n");
    fflush(stdout);

    int numero;
    scanf("%d", &numero);
    fflush(stdout);

    int fatorial = numero;

    for (int i = (numero - 1); i > 0; i--) {
      fatorial *= i;
      printf("Resultado da iteracao %d: %d\n", i, fatorial);
      fflush(stdout);
    }

    printf("O fatorial eh %d\n", fatorial);
    fflush(stdout);

   system("pause");

   return 0;
}