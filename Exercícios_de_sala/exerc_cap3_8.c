#include <stdio.h>
  int main () {
  char nome[100];
  printf("Informe o nome:");
  scanf("%s",&nome);

  int i;
  float salario,aliquota;
  printf("Informe o salario:");
  scanf("%f",&salario);
  

  printf("nome:%s\n",nome);
  printf("salario:%.2f\n",salario);
  
  for(i=1;i<=5;i++) 
  if(salario<1300){
  	printf("Isento\n:");
  }
  else if(salario<=2300){
  	aliquota=salario*0.10;
}
  else 
    aliquota=salario*0.15;

  
  printf("aliquota:%.2f\n",aliquota);
 }
