#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX_FILA 150
#define MAX_COLUMNA 150

int filaA, filaB, columnaA, columnaB, matrizA[MAX_FILA][MAX_COLUMNA], matrizB[MAX_FILA][MAX_COLUMNA], i, j;

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
	menu();
	
	return 0;
}

