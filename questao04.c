
#include <stdio.h>

#include <string.h>

int main() {

   char frase[30];

   printf("FRASE: "); fgets(frase, 30, stdin);

   int size_s = sizeof(frase) / sizeof (frase[0]);

   char matriz[6][5];

   

   memmove(matriz, frase, size_s);

   

   int a, b;

   

   for (a = 0; a < 6; a++){

       for (b = 0; b < 5; b++){

           if (matriz[a][b] != '\0') printf("%c\t", matriz[a][b]);

       }

       printf("\n");

   }

   

   return 0;

}












  
