#include <stdio.h>
int main(){
  int anodenascimento,anoatual,idade;
  printf("Informe o ano de nascimento:");
  scanf("%d",&anodenascimento);
  printf("Informe o ano atual:");
  scanf("%d",&anoatual);
  idade=anoatual-anodenascimento;
  printf("idade:%d\n",idade);
  
  if(anodenascimento>0 && anodenascimento<=anoatual){
   printf("ano de nascimento valido:");
  }
 else
   printf("ano de nascimento nao valido:");

}
