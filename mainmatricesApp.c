#include <stdio.h>
#include <stdlib.h>
#include "funcionmatrices.h"
#include "mTime.h"

int main(int argc, char **argv){
	//** -->doble puntero	
	int N;
	
	N=(int) atof(argv[1]);
	
	int matrizA[N][N];
	int matrizB[N][N];
	int matrizC[N][N];
	
	//atof ingresar por consola
	
	matrizInit(N, matrizA);
	matrizInit(N, matrizB);
	
	//printf("Impresion matriz A \n");
	//imprimirMatriz(N, matrizA);
	//printf("\n");
	
	//printf("Impresion matriz B \n");
	//imprimirMatriz(N, matrizB);
	//printf("\n");
	
	sampleStart();
	
	//printf("Impresion multiplicacion de matriz A y B \n");
	multiplicacionMatrices(N, matrizA,matrizB, matrizC);
	//imprimirMatriz(N, matrizC);
	//printf("\n");
	
	sampleStop();
	printTime();
	
	return 0;
}
