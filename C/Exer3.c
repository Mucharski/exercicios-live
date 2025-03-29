#include <stdio.h>

int main() {
   int numeros[10] = {98, 23, 38, 2, 57, 127, 1, 12, 29, 90};

   for (int i = 0; i < 10; i++) {
      printf("%d, ", numeros[i]);
      fflush(stdout);
   }

   for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
         if (numeros[j] > numeros[j + 1]) {
            int temporaria = numeros[j + 1];
            numeros[j + 1] = numeros[j];
            numeros[j] = temporaria;
         }
      }
   }

   printf("\n");
   fflush(stdout);

   for (int i = 0; i < 10; i++) {
      printf("%d, ", numeros[i]);
   }

   system("pause");
   return 0;
}