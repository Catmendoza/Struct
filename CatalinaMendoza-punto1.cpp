#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include "colores.h"

#define CYAN_T     "\x1b[36m"
#define MAX_FILA 150
#define MAX_COLUMNA 150

int filaA, filaB, columnaA, columnaB, matrizA[MAX_FILA][MAX_COLUMNA], matrizB[MAX_FILA][MAX_COLUMNA], i, j;

void gotoxy(int x,int y)
{
HANDLE hcon;
hcon =GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X = x;
dwPos.Y = y;
SetConsoleCursorPosition(hcon,dwPos);
}

//IMPRIMIR
void imprimir(int opcMatriz){
	if(opcMatriz == 0){
		for(i=0;i<filaA;i++){
		 	printf("\n");
		    for(j=0;j<columnaA;j++){
				printf("%d\t",matrizA[i][j]);
			}
		}
	} else {
		for(i=0;i<filaB;i++){
		 	printf("\n");
		    for(j=0;j<columnaB;j++){
				printf("%d\t",matrizB[i][j]);
			}
		}
	}
}

//MULTIPLICACION MATRICES
int multiplicacionMatrices(){
	int k,mul;
	int matrizC[filaA][columnaB];
	
	for(i=0;i<filaA;i++){
		for(k=0;k<columnaB;k++){
			mul=0;
			for(j=0;j<columnaA;j++){
				mul+=matrizA[i][j]*matrizB[j][k];
				matrizC[i][k]=mul;
			}
		}
	}
	imprimir(0);
	printf("\n\n   * \n");
	imprimir(1);
	printf("\n\n   = \n\n");
	for(i=0;i<filaA;i++){
		printf("\n");
		for(j=0;j<columnaB;j++){
			printf("%d\t",matrizC[i][j]);
		}
	}
}

//PRODUCTO ESCALAR
void productoEscalar(){
	int op,n;
	
	do{
		printf("\n\tEscoge:\n");
		printf("1.Matriz A\n2.Matriz B\n3.Salir\n");
		scanf("%d",&op);
		
		switch(op){
			case 1: 
				printf("\nIngrese un numero: ");
				scanf("%d",&n);
				
				//imprimir
				printf("\n");
				for(i=0;i<filaA;i++){
 	  			    printf("\n");
					for(j=0;j<columnaA;j++){
						printf("%i * %d = %d\t", n, matrizA[i][j], n*matrizA[i][j]);
					}
				}
				break;
			case 2:
				printf("\nIngrese un numero: ");
				scanf("%d",&n);
				
				//imprimir
				printf("\n");
				for(i=0;i<filaB;i++){
 	  			    printf("\n");
					for(j=0;j<columnaB;j++){
						printf("%i * %d = %d\t",n, matrizB[i][j],n*matrizB[i][j]);
					}
				}
				break;
			case 3:
				break;
			default:
				printf("Error.\n");
				break;
		}
	}while(op!=3);
	
}

//RESTA MATRICES
void restaMatrices(){
	//imprimir
	for(i=0;i<filaA;i++){
			printf("\n");
   	  	for(j=0;j<columnaA;j++){
			printf("%i - %i = %d\t", matrizA[i][j], matrizB[i][j], matrizA[i][j]-matrizB[i][j]);
		}
	}  
}

//SUMA MATRICES
void sumaMatrices(){
	//imprimir
	for(i=0;i<filaA;i++){
  	    printf("\n");
   	  	for(j=0;j<columnaA;j++){
   	  		printf("%i + %i = %d\t", matrizA[i][j], matrizB[i][j], matrizA[i][j]+matrizB[i][j]);
		}
	}  
}

void pedirTamanio(){
	while(true){
		printf("\tTamano de la matriz A\n\nIngrese filas: ");
		scanf("%d",&filaA);
		if(filaA <= MAX_FILA){
			break;
		} else {
			printf("Error.\n");
		}
	}
	while(true){
		printf("Ingrese columnas: ");
		scanf("%d",&columnaA);
		if(columnaA <= MAX_COLUMNA){
			break;
		} else {
			printf("Error.\n");
		}
	}
	
	for(i=0;i<filaA;i++){
		for(j=0;j<columnaA;j++){
			printf("Ingrese valores de la matriz A: ");
			scanf("%d",&matrizA[i][j]);
		}
	}
	
	imprimir(0);
	
	while(true){
		printf("\n\n\tTamanio de la matriz B\n\nIngrese filas: ");
		scanf("%d",&filaB);
		if(filaB <= MAX_FILA){
			break;
		} else {
			printf("Error.\n");
		}
	}
	while(true){
		printf("Ingrese columnas: ");
		scanf("%d",&columnaB);
		if(columnaB <= MAX_COLUMNA){
			break;
		} else {
			printf("Error.\n");
		}
	}

	//MATRIZ B
	for(i=0;i<filaB;i++){
		for(j=0;j<columnaB;j++){
			printf("Ingrese valores de la matriz B: ");
			scanf("%d",&matrizB[i][j]);
		}
	}
	
	imprimir(1);
}

void menu(){
	short opc;
	
	do{
		system("cls");
		printf("\n\tBIENVENIDOS\nEscoge una opcion: \n");
		printf("1.Tamano de matriz A y B, y llenar matrices e imprimirlas\n2.Realizar suma de matrices\n3.Realizar resta de matrices");
		printf("\n4.Seleccionar matriz A o matriz B\nEscoger un numero para sacar producto escalar\n5.Multiplicacion de matrices\n6.Salir\n");
		scanf("%hi",&opc);
		
		switch(opc){
			case 1:
				pedirTamanio();
				break;
			case 2:
				if(filaA==filaB && columnaB==columnaA){
					sumaMatrices();
				} else {
					printf("Error.");
				}
				break;
			case 3:
				if(filaA==filaB && columnaB==columnaA){
					restaMatrices();
				} else {
					printf("Error.");
				}
				break;
			case 4:
				productoEscalar();
				break;
			case 5:
				if(filaA==columnaB && filaB==columnaA){
					multiplicacionMatrices();
				} else {
					printf("Error.\n");
				}
				break;
			case 6: break;
			default:
				printf("Error.\n");
				break;
		}
		printf("\n\n");
		system("PAUSE");
	}while(opc != 6);
}

int main(void){
	
	
	color(0,13);
	gotoxy(31,10);
	gotoxy(28,5);printf("U");
	gotoxy(28,6);printf("U");
	gotoxy(28,7);printf("U");
	gotoxy(28,8);printf("U");
	gotoxy(28,9);printf("U");
	gotoxy(28,10);printf("U");
	gotoxy(32,5);printf("U");
	gotoxy(32,6);printf("U");
	gotoxy(32,7);printf("U");
	gotoxy(32,8);printf("U");
	gotoxy(32,9);printf("U");
	gotoxy(32,10);printf("U");
	gotoxy(31,10);printf("U");
	gotoxy(30,10);printf("U");
	gotoxy(29,10);printf("U");
	gotoxy(28,10);printf("U");
	Sleep(1000);
	
	gotoxy(31,10);
	gotoxy(36,10);printf("S");
	gotoxy(40,10);printf("S");
	gotoxy(39,10);printf("S");
	gotoxy(38,10);printf("S");
	gotoxy(37,10);printf("S");
	gotoxy(41,10);printf("S");
	gotoxy(41,9);printf("S");
	gotoxy(41,8);printf("S");
	gotoxy(40,8);printf("S");
	gotoxy(39,8);printf("S");
	gotoxy(38,8);printf("S");
	gotoxy(37,8);printf("S");
	gotoxy(36,8);printf("S");
	gotoxy(36,7);printf("S");
	gotoxy(36,6);printf("S");
	gotoxy(36,5);printf("S");
	gotoxy(37,5);printf("S");
	gotoxy(37,5);printf("S");
	gotoxy(38,5);printf("S");
	gotoxy(39,5);printf("S");
	gotoxy(40,5);printf("S");
	gotoxy(41,5);printf("S");
	Sleep(1000);
	
	gotoxy(49,10);
	gotoxy(45,5);printf("C");
	gotoxy(45,6);printf("C");
	gotoxy(45,7);printf("C");
	gotoxy(45,8);printf("C");
	gotoxy(45,9);printf("C");
	gotoxy(45,10);printf("C");
	gotoxy(46,10);printf("C");
	gotoxy(47,10);printf("C");
	gotoxy(48,10);printf("C");
	gotoxy(49,10);printf("C");
	gotoxy(50,10);printf("C");
	gotoxy(50,5);printf("C");
	gotoxy(49,5);printf("C");
	gotoxy(48,5);printf("C");
	gotoxy(47,5);printf("C");
	gotoxy(46,5);printf("C");
	Sleep(1000);
	
	gotoxy(26,12);
	printf("UNIVERSIDAD SANTIAGO DE CALI");
	Sleep(1000);
	
	color(0,14);
	gotoxy(31,10);
	gotoxy(15,5);printf("_");
	gotoxy(15,6);printf("|");
	gotoxy(15,7);printf("|");
	gotoxy(15,8);printf("|");
	gotoxy(15,9);printf("|");
	gotoxy(15,10);printf("|");
	gotoxy(14,5);printf("_");
	gotoxy(13,5);printf("_");
	gotoxy(12,5);printf("_");
	gotoxy(11,5);printf("_");
	gotoxy(10,5);printf("_");
	gotoxy(9,5);printf("_");
	gotoxy(16,10);printf("_");
	gotoxy(17,10);printf("_");
	gotoxy(18,10);printf("_");
	gotoxy(18,11);printf("|");
	gotoxy(18,12);printf("|");
	gotoxy(18,13);printf("|");
	gotoxy(18,14);printf("|");
	gotoxy(18,15);printf("|");
	gotoxy(18,16);printf("|");
	gotoxy(18,17);printf("|");
	gotoxy(18,18);printf("|");
	gotoxy(18,19);printf("|");
	gotoxy(19,19);printf("_");
	gotoxy(20,19);printf("_");
	gotoxy(21,19);printf("_");
	gotoxy(22,19);printf("_");
	gotoxy(23,19);printf("_");
	gotoxy(24,19);printf("_");
	gotoxy(25,19);printf("_");
	gotoxy(26,19);printf("_");
	gotoxy(27,19);printf("_");
	gotoxy(28,19);printf("_");
	gotoxy(29,19);printf("_");
	gotoxy(30,19);printf("_");
	gotoxy(31,19);printf("_");
	gotoxy(32,19);printf("_");
	gotoxy(33,19);printf("_");
	gotoxy(34,19);printf("_");
	gotoxy(35,19);printf("_");
	gotoxy(36,19);printf("_");
	gotoxy(37,19);printf("_");
	gotoxy(38,19);printf("_");
	gotoxy(39,19);printf("_");
	gotoxy(40,19);printf("_");
	gotoxy(41,19);printf("_");
	gotoxy(42,19);printf("_");
	gotoxy(43,19);printf("_");
	gotoxy(44,19);printf("_");
	gotoxy(45,19);printf("_");
	gotoxy(46,19);printf("_");
	gotoxy(47,19);printf("_");
	gotoxy(48,19);printf("_");
	gotoxy(49,19);printf("_");
	gotoxy(50,19);printf("_");
	gotoxy(51,19);printf("_");
	gotoxy(52,19);printf("_");
	gotoxy(53,19);printf("_");
	gotoxy(54,19);printf("_");
	gotoxy(55,19);printf("_");
	gotoxy(56,19);printf("_");
	gotoxy(57,19);printf("_");
	gotoxy(58,19);printf("_");
	gotoxy(59,19);printf("_");
	gotoxy(60,19);printf("_");
	gotoxy(61,19);printf("_");
	gotoxy(61,11);printf("|");
	gotoxy(61,12);printf("|");
	gotoxy(61,13);printf("|");
	gotoxy(61,14);printf("|");
	gotoxy(61,15);printf("|");
	gotoxy(61,16);printf("|");
	gotoxy(61,17);printf("|");
	gotoxy(61,18);printf("|");
	gotoxy(61,19);printf("|");
	gotoxy(61,10);printf("_");
	gotoxy(62,10);printf("_");
	gotoxy(63,10);printf("_");
	gotoxy(64,10);printf("_");
	gotoxy(64,10);printf("|");
	gotoxy(64,9);printf("|");
	gotoxy(64,8);printf("|");
	gotoxy(64,7);printf("|");
	gotoxy(64,6);printf("|");
	gotoxy(64,5);printf("_");
	gotoxy(65,5);printf("_");
	gotoxy(66,5);printf("_");
	gotoxy(67,5);printf("_");
	gotoxy(68,5);printf("_");
	gotoxy(69,5);printf("_");
	gotoxy(70,5);printf("_");
	Sleep(1000);
	
	color(0,11);
	gotoxy(28,14);
	printf("CATALINA MENDOZA ALVAREZ");
	Sleep(1000);
	
	gotoxy(30,16);
	printf("ESTRUCTURA DE DATOS");
	Sleep(1000);
	
	gotoxy(29,18);
	printf("PROF: RICARDO ALMEIDA");
	Sleep(1000);
	
	getch();
	
	color(0,15);
	menu();
	
	return 0;
}
