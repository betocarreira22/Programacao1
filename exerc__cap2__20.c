#include <stdio.h>
 int main () {
 int idade;
 char nome[30];
 printf("Informe a idade:");
 scanf("%d",&idade);
 printf("Informe o nome:");
 scanf("%s",nome);
 
 switch (idade) {
  case 0 ... 10:
  	printf("Seu nome:%s e pagara R$30,00",nome);
  	break;
  case 10 ... 29:
  	printf("Seu nome:%s e pagara R$60,00",nome);
  	break;
  case 29 ... 45:
  	printf("Seu nome:%s e pagara R$120,00",nome);
  	break;
  case 45 ... 59:
  	printf("Seu nome:%s e pagara R$150,00",nome);
  	break;
  case 59 ... 65:
  	printf("Seu nome:%s e pagara R$250,00",nome);
  	break;
  	default:
  	printf("Seu nome:%s e pagara R$400,00",nome);	
 }
 	 
  }
