#include <stdio.h>


int main(){
int a11,a12,a13,a14,a15,a21,a22,a23,a24,a25;
int duvida;
int matriz[10] = {a11,a12,a13,a14,a15,a21,a22,a23,a24,a25};
printf("Digite os 10 números da matriz: ");
scanf("%d", &a11);
scanf("%d", &a12);
scanf("%d", &a13);
scanf("%d", &a14);
scanf("%d", &a15);
scanf("%d", &a21);
scanf("%d", &a22);
scanf("%d", &a23);
scanf("%d", &a24);
scanf("%d", &a25);


printf("Agora, qual numero você quer saber? ");
scanf("%d", &duvida);
if (duvida == a11) printf("Posição a11");
else if (duvida == a12) printf("Linha 1 Coluna 2");
else if (duvida == a13) printf("Linha 1 Coluna 3");
else if (duvida == a14) printf("Linha 1 Coluna 4");
else if (duvida == a15) printf("Linha 1 Coluna 5");
else if (duvida == a21) printf("Linha 2 Coluna 1");
else if (duvida == a22) printf("Linha 2 Coluna 2");
else if (duvida == a23) printf("Linha 2 Coluna 3");
else if (duvida == a24) printf("Linha 2 Coluna 4");
else if (duvida == a25) printf("Linha 2 Coluna 5");

return 0;








}