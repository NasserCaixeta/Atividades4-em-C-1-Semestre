#include <stdio.h>
int main(){
char produto[20];
int total, nota, produto_preco[10];
printf("Escreva o nome do que deseja comprar: ");
for(int i=0; i<10; i++){
scanf("%s", &produto[i]);
}
printf("Coloque o preço da sua mercadoria: ");
for(int i=0; i<10; i++){
scanf("%d", &produto_preco[i]);
}
for(int i=0; i<10; i++){
if(produto[i]>0){
printf("%c", produto[i]);
printf(" ");
printf("Preço: ");
printf("%i\n", produto_preco[i]);
}
}



return 0;









}