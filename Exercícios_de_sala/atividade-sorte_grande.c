/*
//sorte grande só para sortudo 
ler num1
Se num1 é 7
Ganhou Premio 1 
Se num1 é 43
Ganhou Premio 2 
Se num1 é 56
Ganhou Premio 3 
Se num1 é 87
Ganhou Premio 4
Se num1 é 92
Ganhou Premio 5
A senha é 
Acabou os Premios
*/

#include <stdio.h>
 int main () {
// declarção das variaveis 
 int num1,numSorte;
 float senha;
 printf("Informe o num1:");
 scanf("%d",&num1);
 
 //switch responsavel pela escolha dos premios 
 switch (num1) {
  case  7:
  	printf("Premio 1:");
  	break;
  case  43:
  	printf("Premio 2:");
  	break;
  case  56:
  	printf("Premio 3:");
  	break;
   case  87:
  	printf("Premio 4:");
  	break;
  	case  92:
  	printf("Premio 5:");
  	break;
  	
//impressão da senha 
 printf("senha:%f\n",senha);
 
 default:
 	printf("sem premios:");
 }

 }
