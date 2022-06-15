#include <stdio.h>
int main() {
 float idade;
 printf("Informe a idade:");
 scanf("%f",&idade);
 printf("idade:%.2f",idade);
 
 if(idade>5 && idade<7) {
  printf("Infantil A:");
 }
 else if(idade>8 && idade<10) {
  printf("Infantil B:");
 }
 else if(idade>11 && idade<13) {
  printf("Juvenil A:");
 }
  else if(idade>14 && idade<17) {
  printf("Juvenil B:");
  }
  else 
  printf("Senior:");

}
