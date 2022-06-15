#include <stdio.h>
 int main () {
  char nome[30];
  float nota1,nota2,media;
  printf("Informe a nota 1:");
  scanf("%f",&nota1);
  printf("Informe a nota2:");
  scanf("%f",&nota2);
  printf("Informe o nome:");
  scanf("%s",nome);
  
  media=(nota1+nota2)/2;
  printf("media:%.2f\n",media);
  printf("nome:%s\n",nome);
  
  if(media>=7) {
   printf("Aprovado:");
  }
  else if(media<3){
   printf("Reprovado:");
  }
   else
   printf("Prova Final:");
 }
