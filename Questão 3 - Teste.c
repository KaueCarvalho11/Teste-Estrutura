# include <stdio.h >
int main ( ) {
	//A fun��o "main" n�o foi fechada ao final do c�digo.
	
int N_ant , N_prox , N , N_atual
//Faltando o caractere ';'.

N_ant = N_atual =1;
for( i =1 ,i <= N , i ++) {
	//A vari�vel 'i' n�o foi anteriormente declarada.
	
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ;
printf ("Fim do laco !\n") ;
return
//Faltando os caracteres '0' e ';'
}
