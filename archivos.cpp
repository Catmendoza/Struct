#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<String.h>

struct Nodo{
	int matricula; 
	char nombre[20];
	char carrera[20];
	
	Nodo *siguiente;
	Nodo *atras;
}*primero, *ultimo, *nuevo, *actual;

void crearArchivo();
void cargarDatos();
void mostrarDatos();
void agregarDatos();
void menu();

main(){
	
	menu();
}


void menu(){
	short opc;
	do{
		printf("\tBIENVENIDOS\n\n");
		printf("    ------------------\n");
		printf("    |1.Crear archivos|\n    |2.Cargar datos  |\n    |3.Mostrar datos |\n    |4.Agregar datos |\n    |5.Salir         |\n");
		printf("    ------------------\n");
		scanf("%hi",&opc);
		switch(opc){
		case 1:
			crearArchivo();
			break;
		case 2:
			cargarDatos();
			break;
		case 3:
			mostrarDatos();
			break;
		case 4:
			agregarDatos();
			break;
		case 5:
			break;
		default:
			break;
		}
	}while(opc!=5);
}

void crearArchivo(){
	FILE *pf;
	pf = fopen("prueba.txt","w");
	if (pf == NULL){
	    printf("El fichero no se puede abrir");
	    exit(1);
	}
	fclose(pf);
	system("PAUSE");
}

void cargarDatos(){
	FILE *pf;
	pf = fopen("prueba.txt","r");
	
	if (pf == NULL){
	    printf("El fichero no se puede abrir");
	    exit(1);
	}
	
	while(feof(pf)==0){
		nuevo = new Nodo();
		fscanf(pf,"%d",&nuevo->matricula);
		fscanf(pf,"%s",&nuevo->nombre);
		fscanf(pf,"%s",&nuevo->carrera);
		if(primero==NULL){
			primero=nuevo;
			primero->siguiente=NULL;
			primero->atras=NULL;
			ultimo=primero;
		}else{
			ultimo->siguiente=nuevo;
			nuevo->siguiente=NULL;
			nuevo->atras=ultimo;
			ultimo=nuevo;
		}		
	}
	fclose(pf);
	printf("Carga exitosa \n");
	
}

void mostrarDatos(){
	actual = new Nodo();
	actual=primero;
	
	if(primero!=NULL){
		while(actual!=NULL){
			printf("La matricula del estudiante es %d \n",actual->matricula);
			printf("El nombre del estudiante es %s \n",actual->nombre);
			printf("La carrera del estudiante es %s \n",actual->carrera);
			printf("\n\n");
			actual=actual->siguiente;
		}
	}else{
		printf("\nERROR.POR FAVOR LLENAR DATOS\n\n");
	}
	system("PAUSE");
}

void agregarDatos(){
	nuevo = new Nodo();
	
	printf("Digite matricula\n");
	fflush(stdin);
	scanf("%d",&nuevo->matricula);
	
	printf("Digite nombre\n");
	fflush(stdin);
	gets(nuevo->nombre);
	puts(nuevo->nombre);
	
	printf("Digite carrera\n");
	fflush(stdin);
	gets(nuevo->carrera);

	if(primero==NULL){
		primero=nuevo;
		primero->siguiente=NULL;
		primero->atras=NULL;
		ultimo=primero;
	}else{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->atras=ultimo;
		ultimo=nuevo;
	}
	
	FILE *pf;
	pf = fopen("prueba.txt","w");
	if (pf == NULL){
	    printf("El fichero no se puede abrir");
	    exit(1);
	}
	
	actual = new Nodo();
	actual=primero;
	
	while(actual!=NULL){
		fprintf(pf,"%d\n",actual->matricula);
		fprintf(pf,"%s\n",actual->nombre);
		fprintf(pf,"%s\n",actual->carrera);
		actual=actual->siguiente;
	}

	fclose(pf);	
	system("PAUSE");
}
