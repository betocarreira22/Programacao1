#include <stdio.h>
int main (){
	int salariobruto,valordaprestacao;
	printf("Informe o salario bruto:");
	scanf("%d",&salariobruto);
	printf("Informe o valordaprestacao:");
	scanf("%d",&valordaprestacao);
	
	if(valordaprestacao<=salariobruto*0.30) {
		printf("emprestimo concebido:");
	}
	else
	printf("emprestimo nao concebido:");
}
