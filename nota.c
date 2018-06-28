#include <stdio.h>
int main(){
float nota;
char resultado;
printf("R = Reprovado A = Aprovado\n");
printf("Digite sua nota: ");
scanf("%f",&nota);
resultado = (nota <= 4.0) ? 'R':'A';
printf("O aluno foi %c",resultado);
}