# include <stdio.h >
int main ( ) {
	//A função "main" não foi fechada ao final do código.
	
int N_ant , N_prox , N , N_atual
//Faltando o caractere ';'.

N_ant = N_atual =1;
for( i =1 ,i <= N , i ++) {
	//A variável 'i' não foi anteriormente declarada.
	
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ;
printf ("Fim do laco !\n") ;
return
//Faltando os caracteres '0' e ';'
}
