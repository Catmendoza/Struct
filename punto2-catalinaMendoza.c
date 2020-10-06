#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include "colores.h"

#define NOTAS 3
#define MAX_NOTA 5
#define MIN_NOTA 1

int i;
float notas[NOTAS],promedio;

void gotoxy(int x,int y)
{
	HANDLE hcon;
	hcon =GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}

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
		
	color(0,13);
	gotoxy(31,10);
	gotoxy(30,5);printf("U");
	gotoxy(30,6);printf("U");
	gotoxy(30,7);printf("U");
	gotoxy(30,8);printf("U");
	gotoxy(30,9);printf("U");
	gotoxy(30,10);printf("U");
	gotoxy(35,5);printf("U");
	gotoxy(35,6);printf("U");
	gotoxy(35,7);printf("U");
	gotoxy(35,8);printf("U");
	gotoxy(35,9);printf("U");
	gotoxy(35,10);printf("U");
	gotoxy(34,10);printf("U");
	gotoxy(33,10);printf("U");
	gotoxy(32,10);printf("U");
	gotoxy(31,10);printf("U");
	Sleep(1000);
	
	gotoxy(31,10);
	gotoxy(37,10);printf("S");
	gotoxy(41,10);printf("S");
	gotoxy(40,10);printf("S");
	gotoxy(39,10);printf("S");
	gotoxy(38,10);printf("S");
	gotoxy(42,10);printf("S");
	gotoxy(42,9);printf("S");
	gotoxy(42,8);printf("S");
	gotoxy(41,8);printf("S");
	gotoxy(40,8);printf("S");
	gotoxy(39,8);printf("S");
	gotoxy(38,8);printf("S");
	gotoxy(37,8);printf("S");
	gotoxy(37,7);printf("S");
	gotoxy(37,6);printf("S");
	gotoxy(37,5);printf("S");
	gotoxy(38,5);printf("S");
	gotoxy(38,5);printf("S");
	gotoxy(39,5);printf("S");
	gotoxy(40,5);printf("S");
	gotoxy(41,5);printf("S");
	gotoxy(42,5);printf("S");
	Sleep(1000);
	
	gotoxy(49,10);
	gotoxy(44,5);printf("C");
	gotoxy(44,6);printf("C");
	gotoxy(44,7);printf("C");
	gotoxy(44,8);printf("C");
	gotoxy(44,9);printf("C");
	gotoxy(44,10);printf("C");
	gotoxy(45,10);printf("C");
	gotoxy(46,10);printf("C");
	gotoxy(47,10);printf("C");
	gotoxy(48,10);printf("C");
	gotoxy(49,10);printf("C");
	gotoxy(49,5);printf("C");
	gotoxy(48,5);printf("C");
	gotoxy(47,5);printf("C");
	gotoxy(46,5);printf("C");
	gotoxy(45,5);printf("C");
	Sleep(1000);
	
	gotoxy(26,12);
	printf("UNIVERSIDAD SANTIAGO DE CALI");
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
	
	getch();
	
	color(0,15);
	menu();

	return 0;
}
