#include<stdio.h>

int main (){
	
	int N1[10], N2[10];
	int a, b = 9;
	
	printf ("Digite 10 valores:\n", a);
	
	for (a = 0; a < 10; a++){
		scanf ("%i", &N1[a]);
	}
	
	for (a = 0; a < 10; a++){
		N2[b] = N1[a];
		b--;
	}
	
	for (a = 0; a < 10; a++){
		printf ("N1[%i] = %i N2[%i] = %i\n", a, N1[a], a, N2[a]);
	}
	
}
