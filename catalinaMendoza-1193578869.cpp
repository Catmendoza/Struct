#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "colores.h"

int i,n;
void datosMenu();

void gotoxy(int x,int y)
{
HANDLE hcon;
hcon =GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X = x;
dwPos.Y = y;
SetConsoleCursorPosition(hcon,dwPos);
}

void portada(){
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
}

//ESTRUCTURAS
struct direccion{
	char dire[20];
	int estrato;
	char barrio[30];
	char ciudad[20];	
};

struct fech_naci{
	int dia;
	int mes;
	int anio;
};

struct estudiante{
	int codigo;
	char nombre[30];
	char apellidos[30];
	int edad;
	struct fech_naci nacer;
	struct direccion direc;
	float nota1;
	float nota2;
	float nota3;
	float promedio;
			
} est[255];

void error(){
	system("cls");
	printf("----------------------------"); 
	printf("\n\tERROR.\n");
	printf("----------------------------\n\n"); 
	system("PAUSE");
}

void imprimir(){
	
	for(i=0;i<n;i++){
		
		printf("El codigo del estudiante %d es: %d\n",(i+1),est[i].codigo);
		printf("El nombre del estudiante %d es: %s\n",(i+1),est[i].nombre);
		printf("Los apellidos del estudiante %d son: %s\n",(i+1),est[i].apellidos);
		printf("La edad del estudiante %d es: %d\n",(i+1),est[i].edad);
		printf("La fecha de nacimiento del estudiante %d es: %d - %d - %d\n",(i+1),est[i].nacer.dia,est[i].nacer.mes,est[i].nacer.anio);
		printf("La direccion del estudiante %d es: %s\n",(i+1),est[i].direc.dire);
		printf("El estrato del estudiante %d es: %d\n",(i+1),est[i].direc.estrato);
		printf("El barrio del estudiante %d es: %s\n",(i+1),est[i].direc.barrio);
		printf("La ciudad del estudiante %d es: %s\n",(i+1),est[i].direc.ciudad);
		printf("La nota1 del estudiante %d es: %.1f\n",(i+1),est[i].nota1);
		printf("La nota2 del estudiante %d es: %.1f\n",(i+1),est[i].nota2);
		printf("La nota3 del estudiante %d es: %.1f\n",(i+1),est[i].nota3);
		printf("El promedio es: %.1f\n",est[i].promedio);
		printf("\n\n");
	}
}

void datosNota1Menor(){
	float nMenor=est[0].nota1;	
	for(i=0;i<n;i++){
		if(est[i].nota1 < nMenor){
			nMenor=est[i].nota1;
		}
	}
	for(i=0;i<n;i++){
		if(est[i].nota1==nMenor){
			printf("\nLa nota menor del campo NOTA1 es: %.1f\n",nMenor);
			printf("------------------------------------------------------------------\n");
			printf("\tEl codigo del estudiante %d es: %d\n",(i+1),est[i].codigo);
			printf("\tEl nombre del estudiante %d es: %s\n",(i+1),est[i].nombre);
			printf("\tLos apellidos del estudiante %d son: %s\n",(i+1),est[i].apellidos);
			printf("\tLa edad del estudiante %d es: %d\n",(i+1),est[i].edad);
			printf("\tLa fecha de nacimiento del estudiante %d es: %d - %d - %d\n",(i+1),est[i].nacer.dia,est[i].nacer.mes,est[i].nacer.anio);
			printf("\tLa direccion del estudiante %d es: %s\n",(i+1),est[i].direc.dire);
			printf("\tEl estrato del estudiante %d es: %d\n",(i+1),est[i].direc.estrato);
			printf("\tEl barrio del estudiante %d es: %s\n",(i+1),est[i].direc.barrio);
			printf("\tLa ciudad del estudiante %d es: %s\n",(i+1),est[i].direc.ciudad);
			printf("\tLa nota1 del estudiante %d es: %.1f\n",(i+1),est[i].nota1);
			printf("\tLa nota2 del estudiante %d es: %.1f\n",(i+1),est[i].nota2);
			printf("\tLa nota3 del estudiante %d es: %.1f\n",(i+1),est[i].nota3);
			printf("\tEl promedio es: %.1f\n",est[i].promedio);
			printf("\n------------------------------------------------------------------\n");
		}
	}
}

void datosPromedioMenor(){
	float menor=est[0].promedio;	
	for(i=0;i<n;i++){
		if(est[i].promedio < menor){
			menor=est[i].promedio;
		}
	}
	for(i=0;i<n;i++){
		if(est[i].promedio==menor){
			printf("\nEl promedio menor es: %.1f\n",menor);
			printf("------------------------------------------------------------------\n");
			printf("\tEl codigo del estudiante %d es: %d\n",(i+1),est[i].codigo);
			printf("\tEl nombre del estudiante %d es: %s\n",(i+1),est[i].nombre);
			printf("\tLos apellidos del estudiante %d son: %s\n",(i+1),est[i].apellidos);
			printf("\tLa edad del estudiante %d es: %d\n",(i+1),est[i].edad);
			printf("\tLa fecha de nacimiento del estudiante %d es: %d - %d - %d\n",(i+1),est[i].nacer.dia,est[i].nacer.mes,est[i].nacer.anio);
			printf("\tLa direccion del estudiante %d es: %s\n",(i+1),est[i].direc.dire);
			printf("\tEl estrato del estudiante %d es: %d\n",(i+1),est[i].direc.estrato);
			printf("\tEl barrio del estudiante %d es: %s\n",(i+1),est[i].direc.barrio);
			printf("\tLa ciudad del estudiante %d es: %s\n",(i+1),est[i].direc.ciudad);
			printf("\tLa nota1 del estudiante %d es: %.1f\n",(i+1),est[i].nota1);
			printf("\tLa nota2 del estudiante %d es: %.1f\n",(i+1),est[i].nota2);
			printf("\tLa nota3 del estudiante %d es: %.1f\n",(i+1),est[i].nota3);
			printf("\tEl promedio es: %.1f\n",est[i].promedio);
			printf("\n------------------------------------------------------------------\n");
		}
	}
}

void datosPromedioMayor(){
	float mayor=est[0].promedio;
	for(i=0;i<n;i++){
		if(est[i].promedio > mayor){
			mayor=est[i].promedio;
		}
	}
	
	for(i=0;i<n;i++){
		if(est[i].promedio==mayor){
			printf("\nEl promedio mayor es: %.1f\n",mayor);
			printf("------------------------------------------------------------------\n");
			printf("\tEl codigo del estudiante %d es: %d\n",(i+1),est[i].codigo);
			printf("\tEl nombre del estudiante %d es: %s\n",(i+1),est[i].nombre);
			printf("\tLos apellidos del estudiante %d son: %s\n",(i+1),est[i].apellidos);
			printf("\tLa edad del estudiante %d es: %d\n",(i+1),est[i].edad);
			printf("\tLa fecha de nacimiento del estudiante %d es: %d - %d - %d\n",(i+1),est[i].nacer.dia,est[i].nacer.mes,est[i].nacer.anio);
			printf("\tLa direccion del estudiante %d es: %s\n",(i+1),est[i].direc.dire);
			printf("\tEl estrato del estudiante %d es: %d\n",(i+1),est[i].direc.estrato);
			printf("\tEl barrio del estudiante %d es: %s\n",(i+1),est[i].direc.barrio);
			printf("\tLa ciudad del estudiante %d es: %s\n",(i+1),est[i].direc.ciudad);
			printf("\tLa nota1 del estudiante %d es: %.1f\n",(i+1),est[i].nota1);
			printf("\tLa nota2 del estudiante %d es: %.1f\n",(i+1),est[i].nota2);
			printf("\tLa nota3 del estudiante %d es: %.1f\n",(i+1),est[i].nota3);
			printf("\tEl promedio es: %.1f\n",est[i].promedio);
			printf("\n------------------------------------------------------------------\n");
		}
	}
}

void datosMayorDeEdad(){
	
	for(i=0;i<n;i++){
		if(est[i].edad>=18){
			printf("------------------------------------------------------------------\n");
			printf("\tEl codigo del estudiante %d es: %d\n",(i+1),est[i].codigo);
			printf("\tEl nombre del estudiante %d es: %s\n",(i+1),est[i].nombre);
			printf("\tLos apellidos del estudiante %d son: %s\n",(i+1),est[i].apellidos);
			printf("\tLa edad del estudiante %d es: %d\n",(i+1),est[i].edad);
			printf("\tLa fecha de nacimiento del estudiante %d es: %d - %d - %d\n",(i+1),est[i].nacer.dia,est[i].nacer.mes,est[i].nacer.anio);
			printf("\tLa direccion del estudiante %d es: %s\n",(i+1),est[i].direc.dire);
			printf("\tEl estrato del estudiante %d es: %d\n",(i+1),est[i].direc.estrato);
			printf("\tEl barrio del estudiante %d es: %s\n",(i+1),est[i].direc.barrio);
			printf("\tLa ciudad del estudiante %d es: %s\n",(i+1),est[i].direc.ciudad);
			printf("\tLa nota1 del estudiante %d es: %.1f\n",(i+1),est[i].nota1);
			printf("\tLa nota2 del estudiante %d es: %.1f\n",(i+1),est[i].nota2);
			printf("\tLa nota3 del estudiante %d es: %.1f\n",(i+1),est[i].nota3);
			printf("\tEl promedio es: %.1f\n",est[i].promedio);
			printf("\n------------------------------------------------------------------\n");
		}else{
			if(i<1){
				printf("\n No hay datos de edad mayor\n\n");
			}
			
		}
	}
}

void calcularEdades(){
	int sum;
	float promedio;
	for(i=0;i<n;i++){
		sum+=est[i].edad;
		promedio=(float)sum/n;
	}
	printf("-----------------------------------------------------------\n");
	printf("\nEl promedio de las edades de los estudiantes es: %.1f\n",promedio);
	printf("\n-----------------------------------------------------------\n");
}

void menu(){
	short opc;
	
	do{
		system("cls");
		printf("\tSECCION DE CALCULOS\n");
		printf("1.Calcular y mostrar el promedio de las edades de todos los estudiantes.\n2.Mostrar los datos de los estudiantes mayores de edad (edad>= 18).\n");
		printf("3.Mostrar los datos del estudiante que obtuvo el promedio mayor.\n4.Mostrar los datos del estudiante que obtuvo la nota mas baja en promedio.\n");
		printf("5.Mostrar los datos del estudiante que obtuvo la nota mas baja en el campo nota1");
		printf("6.Devolverse al menu.\n");
		scanf("%hi",&opc);
		switch(opc){
			case 1: 
				calcularEdades();
				break;
			case 2:
				datosMayorDeEdad();
				break;
			case 3:
				datosPromedioMayor();
		    	break;
			case 4: 
				datosPromedioMenor(); 
			    break;
			case 5:
				datosNota1Menor();
			    break;
			case 6:
				return;
			    break;
			default:
				error();
			break;
		}
		printf("\n\n");
		system("PAUSE");
	}while(opc!=6);	
}

void datos(){
	
	printf("Cuantos alumnos desea ingresar: \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		printf("Ingresa el codigo del estudiante %d:\n",i+1);
		scanf("%d",&est[i].codigo);
		fflush(stdin);
		printf("Ingresa el nombre del estudiante %d:\n",i+1);
		gets(est[i].nombre);
		fflush(stdin);
		printf("Ingresa los apellidos del estudiante %d:\n",i+1);
		gets(est[i].apellidos);
		fflush(stdin);
		do{
			printf("Ingresa la edad del estudiante %d:\n",i+1);
			scanf("%d",&est[i].edad);
			fflush(stdin);
			if(est[i].edad<1 || est[i].edad>120){
				error();
			}
		}while(est[i].edad<1 || est[i].edad>120);
		printf("Ingresa la fecha de nacimiento del estudiante %d\n",i+1);
		do{
			printf("Ingrese el dia:\n");
			scanf("%d",&est[i].nacer.dia);
			fflush(stdin);
			if(est[i].nacer.dia<1 || est[i].nacer.dia>31){
				error();
			}
		}while(est[i].nacer.dia<1 || est[i].nacer.dia>31);
		do{
			printf("Ingrese el mes:\n");
			scanf("%d",&est[i].nacer.mes);
			fflush(stdin);
			if(est[i].nacer.mes<1 || est[i].nacer.mes>12){
				error();
			}
		}while(est[i].nacer.mes<1 || est[i].nacer.mes>12);
		do{
			printf("Ingrese el anio:\n");
			scanf("%d",&est[i].nacer.anio);
			fflush(stdin);
			if(est[i].nacer.anio<1950 || est[i].nacer.anio>2019){
				error();
			}
		}while(est[i].nacer.anio<1950 || est[i].nacer.anio>2019);
		printf("Ingresa la direccion del estudiante %d:\n",i+1);
		gets(est[i].direc.dire);
		fflush(stdin);
		do{
			printf("Ingresa el estrato del estudiante %d:\n",i+1);
			scanf("%d",&est[i].direc.estrato);
			fflush(stdin);
			if(est[i].direc.estrato<0 || est[i].direc.estrato>6){
				error();
			}
		}while(est[i].direc.estrato<0 || est[i].direc.estrato>6);
		printf("Ingresa el barrio del estudiante %d:\n",i+1);
		gets(est[i].direc.barrio);
		fflush(stdin);
		printf("Ingresa la ciudad del estudiante %d:\n",i+1);
		gets(est[i].direc.ciudad);
		fflush(stdin);
		do{
			printf("Ingresa la nota1 del estudiante %d:\n",i+1);
			scanf("%f",&est[i].nota1);
			fflush(stdin);
			if(est[i].nota1<0 || est[i].nota1>5){
				error();
			}
		}while(est[i].nota1<0 || est[i].nota1>5);
		do{
			printf("Ingresa la nota2 del estudiante %d:\n",i+1);
			scanf("%f",&est[i].nota2);
			fflush(stdin);
			if(est[i].nota2<0 || est[i].nota2>5){
				error();
			}
		}while(est[i].nota2<0 || est[i].nota2>5);
		do{
			printf("Ingresa la nota3 del estudiante %d:\n",i+1);
			scanf("%f",&est[i].nota3);
			fflush(stdin);	
			if(est[i].nota3<0 || est[i].nota3>5){
				error();
			}
		}while(est[i].nota3<0 || est[i].nota3>5);
		est[i].promedio=(float)(est[i].nota1+est[i].nota2+est[i].nota3)/3;
		printf("\n\n");
		
	}
}

void datosMenu(){
	short opc;
	do{
		system("cls");
		printf("\tBIENVENIDOS\n");
		printf("1.Ingresar los datos\n2.Imprimir datos\n3.Menu\n4.Salir\n");
		scanf("%hi",&opc);
		switch(opc){
			case 1: 
				datos();
			    break;
			case 2:
				imprimir();
			    break;
			case 3:
				menu();
			    break;
			case 4:
				break;
			default:
				error();						
			break;
		}
		printf("\n\n");
		system("PAUSE");
	}while(opc!=4);
}

int main(void){
	portada();
	datosMenu();
}
