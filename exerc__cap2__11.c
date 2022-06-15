#include <stdio.h>
 int main () {
   float num1,num2,num3;
   printf("Informe o num1:");
   scanf("%f",&num1);
   printf("Informe o num2:");
   scanf("%f",&num2);
   printf("Informe o num3:");
   scanf("%f",&num3);
 
   if(num1>num2 && num1>num3){
   printf("num1:%.2f\n",num1);
   }
    else if(num2>num3 && num2>num1){
   printf("num2:%.2f\n",num2);
 }
   else if(num3>num1 && num3>num2){
   printf("num3:%.2f\n",num3);
   }
 }
