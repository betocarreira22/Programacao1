#include <stdio.h>
 int main () {
  char nome[30];
  int nota1,nota2,media;
  printf("Informe o nome:");
  scanf("%s",&nome);
  printf("Informe a nota1:");
  scanf("%d",&nota1);
  printf("Informe a nota2:");
  scanf("%d",&nota2);
  
  media=(nota1+nota2)/2;
  printf("nome:%s\n",nome);
  printf("media:%.2d\n",media);
  
  switch (media) {
  	case 7 ... 10:
    printf("Aprovado:");
    break;
    case 0 ... 3:
    printf("Reprovado:");
    break;
	default:
	printf("Prova Final:");
}
	}
