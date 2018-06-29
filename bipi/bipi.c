#include <stdio.h>
#include <stdlib.h>
int main(){
char nome[30];	//Nome do Jogador
int vida=5,escolha,vf = 0,negativos=0,positivos=0,dinheiro=100,trofeis=0;
while(!vf){
	printf("Qual é o seu nome?\n");
	printf(">");
	scanf("%[^\n]s", nome);
	setbuf(stdin, NULL);
	printf("Paulo - Olá %s\n",nome);
	printf("(1)Como Vai (2)Sai da minha frente\n");
	printf(">");
	scanf("%i",&escolha);
if(escolha == 1){
	printf("Paulo - Muito bem nos vemos por ai\n");
	positivos++;
}//Fechamento IF
if(escolha == 2){
	printf("Paulo - ....\n");
	negativos++;
}//Fechamento IF
printf("Capitão - Atenção!!!\n");
printf("Capitão - Nosso ataque sera as 9 horas da manhã\n");
printf("(1)Ir para o quarto (2)Ir para a lanchonete\n");
printf(">");
scanf("%i",&escolha);
if(escolha == 1){
	printf("Apos chegar no quarto\n");
	printf("(1)Dormir (2)Jogar Xadrez com a Meli\n");
	printf(">");
	scanf("%i",&escolha);
if(escolha == 1){
		printf("Você deita em sua cama e dorme ate as 8 horas e 55 minutos\n\n");
}//Fechamento do 2 IF
if(escolha == 2){
		trofeis++;
		printf("Troféu Estrategista\n");
		printf("Você joga xadrez por muito tempo\n\n");
		escolha = 0;
}//Fechamento do 3 IF

}//Fechamento IF 
if(escolha == 2){
	printf("Já na lanchonete\n");
	printf("(1)Café Custo: 2 @Bunes (2)Lanche Custo: 5 @Bunes\n");
	printf(">");
	scanf("%i",&escolha);
if(escolha == 1){
		printf("Você toma um café em conto lê uma revista\n\n");
}//Fechamento 2 IF
if(escolha == 2){
		printf("Você come em conto lê uma revista\n\n");
}//Fechamento 3 IF

}//Fechamento IF
printf("Um sinal toca\n");
printf("Capitão - Todos os soldados sigam para seus postos!!!\n");
printf("(1)Ir para seu posto\n");
printf(">");
scanf("%i",&escolha);
if(escolha == 1){
		printf("Lara - Bem Vindo Senhor ao departamento de inteligencia\n");
		printf("(1)Obrigado (2)Tanto Faz\n");
		printf(">");
		scanf("%i",&escolha);
if(escolha == 1){
		printf("Lara - Dinada Senhor\n");
		positivos++;
}//Fechamento 2 IF
if(escolha == 2){
		printf("Lara - Sim senhor\n");
		negativos++;
}//Fechamento 3 IF
}//Fechamento IF
printf("%s - Qual é a situação?\n",nome);
printf("Frite - Eles estão atacando a base a norte\n");
printf("(1)Sabotar a Comunicação do inimigo (2)Bombardear o inimigo\n");
printf(">");
scanf("%i",&escolha);
if(escolha == 1){
	trofeis++;
	printf("Troféu Sabotador\n");
	printf("Toda a comunicação inimiga foi sabotada\n");
}//Fechamento IF
if(escolha == 2){
	printf("Envio de bombardeio foi aceito começara daqui 3 minutos\n");
}//Fechamento IF
printf("Larmeu - Senhor a Meli conseguiu algumas informações do inimigo\n");
printf("%s - Nunca amei tanto uma inteligencia artificial\n",nome);
printf("De repente as luzes se apagão\n");
printf("%s - O que é isso\n",nome);
printf("Frite - Um ataque eles invadirão o sistemada da Meli e sairão de nossos radares\n");
printf("%s - Era de se imaginar nunca odiei tanto uma inteligencia artificial\n",nome);
printf("%s - Peguem suas armas\n",nome);
printf("Inimigo - Entreguem seu líder e nos não vamos matar vocês juramos perante a lei\n");
if(positivos > negativos){
	trofeis++;
	printf("Troféu Guerreiros\n");
	printf("Lara - Morreremos com o senhor e com honra\n");
	printf("A porta se abre todos as pessoas da sala começão a atirar no soldados inimigos mas todos acabam mortos\n");
}//Fechamento IF 
if(negativos > positivos){
	printf("Você sente uma arma na suas costas\n");
	printf("Frite - Se entregue senhor\n");
	printf("Eles te entregam e são considerados prisioneiros de guerra já você não tem um fim muito bom\n");
}//Fechamento IF
if(negativos == positivos){
	printf("Todos se entregam sem ao menos lutar\n");
}//Fechamento IF
vf = 1;
}//Fechamento while
printf("---------------------------Tabela--------------------------\n");
printf("Nome do Personagem:\t%s\n",nome);
printf("Troféus adquiridos:\t%i\n",trofeis);
printf("Pontos Negativos:\t%i\n",negativos);
printf("Pontos Positivos:\t%i\n",positivos);
printf("-----------------------------------------------------------\n");
return 0;
}//Fechamento main
