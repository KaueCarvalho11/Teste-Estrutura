# include <stdio.h >
int f (int mat [3][3]) {
	//Foi definido uma matriz de 3 linhas e 3 colunas.
	
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
//Foram realizadas operações matemáticas

}
int main ( void ) {
//foi criada uma nova função
	
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
int de = f ( m ) ;
//Foram definidos os valores de 'm' e alocados em "de".

printf (" Resultado = \t %d", de ) ;
//Foi impresso na tela o resultado das operações matemáticas acima.
return 0;
}
