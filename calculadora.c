//Name:calculadora.c
//Author: pepesamurai
#include <stdio.h>
int main(){
int n1,n2,total;//Pega os 
printf("Digite um numero: ");
scanf("%i",&n1);
printf("Digite outro numero: ");
scanf("%i",&n2);
total = n1 / n2;
printf("Divisão: %i\n",total);
total = n1 * n2;
printf("Multiplicação: %i\n",total);
total = n1 - n2;
printf("Subtração: %i\n",total);
total = n1 + n2;
printf("Adição: %i\n",total);
return 0;
}