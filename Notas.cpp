#include <stdio.h>
#include <stdlib.h>

#define NOTAS 3
#define MAX_NOTA 5
#define MIN_NOTA 1

int i;
float notas[NOTAS],promedio;

//CALCULAR PROMEDIO
void calcularPromedio(){
	printf("promedio %.1f",promedio);
	if(promedio >= 3.5){
		printf("\nAPROBO.\n");
	}else if(promedio >= 3){
		printf("\nCURSO DE REFUERZO.\n");
	}else if(promedio >= 2.5){
		printf("\nREPROBO Y PUEDE HABILITAR.\n");
	}else{
		printf("\nREPROBO\n");
	}
}

//INGRESAR NOTAS
void ingresarNotas(){
	promedio = 0;
	
	for(i=0;i<NOTAS;i++){
		while(true){
			printf("Ingrese la nota numero %i:\n", (i + 1));
			scanf("%f", &notas[i]);
			if(notas[i] >= MIN_NOTA && notas[i] <= MAX_NOTA){
				break;
			} else {
				printf("Error.\n");
			}
		}
		promedio+=(float) notas[i]/NOTAS;
	}
}

//MENU
void menu(){
	short opc;
	
	do{
		system("cls");
		printf("\tBIENVENIDO\n");
		printf("Escoge la opcion:\n1. Ingresar notas.\n2. Calcular promedio.\n3. Salir.\n");
		scanf("%hi",&opc);
		
		switch(opc){
			case 1: 
				ingresarNotas();
				break;
			case 2:
				calcularPromedio();
				break;
			case 3:
				break;
			default:
				printf("Error.");
				break;
		}
		system("PAUSE");
	}while(opc!=3);
}

int main(void){
	menu();

	return 0;
}
