//Name:idade.c
//Author: pepesamurai
#include <stdio.h>
int main(){
unsigned int idade,ano;
printf("Digite o ano que você nasceu: ");
scanf("%i",&ano);
idade = 2018 - ano;
printf("Idade = %i",idade);
return 0;
}