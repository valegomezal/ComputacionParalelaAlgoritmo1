#include "funcionmatrices.h"
#include <stdio.h>

void matrizInit(int N, int matriz[N][N]){
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			matriz[i][j]=2*(j-i);
}

void sumaMatrices(int N, int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
	for (int i=0; i < N; i++){
	
		for (int j=0; j < N; j++){
		
			matrizC[i][j]=matrizA[i][j] + matrizB[i][j];}
			}
}

void restaMatrices(int N, int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
	for (int i=0; i < N; i++)
		for (int j=0; j < N; j++)
			matrizC[i][j]=matrizA[i][j] - matrizB[i][j];
}

void multiplicacionMatrices(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]){
	for (int i=0; i < N; i++){
		for (int j=0; j < N; j++){
			matrizC[i][j]=0;
			for (int k=0; k < N; k++){
			matrizC[i][j] += matrizA[i][k]*matrizB[k][j];
		}
		}
	}
}
void matrizTranspuesta(int N, int matrizA[3][3], int matrizC[3][3]){
	for (int i=0; i < N; i++)
		for (int j=0; j < N; j++)
			matrizC[i][j]=matrizA[j][i];
}

void imprimirMatriz(int N, int matrizR[N][N]) {
	for (int i=0; i < N; i++){
		for (int j=0; j < N; j++){
			printf("%d\t", matrizR[i][j]);
			
			}
		printf("\n");
			}
}

