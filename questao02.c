#include <stdio.h>


int main(){
 int aluno[10];
 float soma, media;
 int nota_acima,aluno_acima;
 soma = 0;
 media = 0;
 for(int i=0;i<10;i=i+1){
   scanf("%d", &aluno[i]);
 }
for(int i=0;i<10;i=i+1){
  soma = soma + aluno[i];
}

media = soma /10;
for(int i=0;i<10;i=i+1){
  if (aluno[i] > media) 
  aluno_acima = aluno_acima +1;


}
printf("%d",aluno_acima);

return 0;




















}