#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>


//PORTADA
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon =GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void portada(){
	system("color 3");     
	for (int i = 5 ; i < 11 ; i++){
		gotoxy(31,i) ;printf("U");
		Sleep(100);	
	}
	gotoxy(32,11);printf("U");
	Sleep(100);
	gotoxy(34,11);printf("U");
	Sleep(100);
	for (int i = 10 ; i >=5 ; i--){
		gotoxy(35,i) ;printf("U");
		Sleep(100);
	}
	system("color 2");
	gotoxy (47,5);printf("S");
	Sleep(100);
	gotoxy (45,5);printf("S");
	Sleep(100);
	gotoxy (43,6);printf("S");
	Sleep(100);
	gotoxy (43,7);printf("S");
	Sleep(100);
	gotoxy (45,8);printf("S");
	Sleep(100);
	gotoxy (47,9);printf("S");
	Sleep(100);
	gotoxy (47,11);printf("S");
	Sleep(100);
	gotoxy (45,11);printf("S");
	Sleep(100);
	gotoxy (43,10);printf("S");
	Sleep(100);
	gotoxy(48,10);printf("S");
	Sleep(100);
	system("color 3");
	gotoxy (60,5);printf("C");
	Sleep(100);
	gotoxy (58,5);printf("C");
	Sleep(100);
	gotoxy(56,6);printf("C");
	Sleep(100);
	gotoxy(55,7);printf("C");
	Sleep(100);
	gotoxy(55,8);printf("C");
	Sleep(100);
	gotoxy(55,9);printf("C");
	Sleep(100);
	gotoxy(56,10);printf("C");
	Sleep(100);
	gotoxy(58,11);printf("C");
	Sleep(100);			
	gotoxy(60,11);printf("C");
	Sleep(100);
	
	system("color 4");
	for (int i= 4 ; i < 14; i++){
		gotoxy(27,i);printf("|");
		Sleep(50);	
	}
	
	for (int i = 28 ; i < 65 ; i++){
   		gotoxy(i,13);printf("_");
   	    Sleep(50);
	}
	
	system("color 4");
	for (int i= 13 ; i >= 4; i--){
		gotoxy(65,i);printf("|");
		Sleep(50);
	}
    
    for (int i = 64 ; i >= 28 ; i--){
    	gotoxy(i,3);printf("_");
    	Sleep(50);
	}

	system("color 5");
	Sleep(100);
		

	gotoxy(28,14);printf("______________ESTRUCTURAS_____________");
	Sleep(150);
	system("color 6");
	gotoxy(28,16);printf("Estudiantes:\n");
	gotoxy(41,17);printf("Giovanni Jaramillo Bolaños");
	gotoxy(41,18);printf("Catalina Mendoza Alvarez");
	Sleep(150);
	system("color 7");
	gotoxy(28,20);printf("Codigo: 1005964681 y 1193578869");
	Sleep(150);
	system("color 3");
	gotoxy(28,22);printf("Programas: Ingenieria y tecnologia de sistemas");
	gotoxy(28,25);printf("Presiona enter ");
	getch();
	system("cls");
	system("color F");
}


//NODO
struct Nodo{
	char codigo[24];
	char nombre[24];
	char apellido[24];
	char direccion[24];
	char telefono[24];
	int edad;
	
	Nodo *siguiente;
	Nodo *atras;
	
}*primero,*ultimo,*nuevo,*actual;
 
//PROTOTIPOS DE FUNCIONES
void menu();
void registrarPaciente();
void mostrarAsc();
void mostrarDsc();
void actualizarPaciente();
void buscarPaciente();
void eliminarDatos();

//MAIN
main(){
	portada();
	menu();
}

//FUNCION MENU
void menu(){
	short opc;
	
	do{
		printf("\tBIENVENIDOS\nEscoge una opcion:\n1.Registrar pacientes\n2.Mostrar lista ASC\n3.Mostrar listado DSC\n4.Actualizar paciente\n5.Buscar paciente por edad\n");
		printf("6.Eliminar paciente\n7.Salir\n");
		scanf("%hi",&opc);
		switch(opc){
			case 1:
				registrarPaciente();
				break;
			case 2:
				mostrarAsc();
				break;
			case 3:
				mostrarDsc();
				break;
			case 4:
				actualizarPaciente();
				break;
			case 5:
				buscarPaciente();
				break;
			case 6:
				eliminarDatos();
				break;
			case 7:
				break;
			default:
				printf("\n\tERROR.ESCOGE UNA OPCION\n");
				break;
		}
		system("cls");
	}while(opc!=7);
}

//FUNCION REGISTRAR
void registrarPaciente(){
	system("cls");
	nuevo = new Nodo();
	
	printf("Ingresa el codigo del paciente: \n");
	fflush(stdin);
	gets(nuevo->codigo);
	printf("Ingresa el nombre del paciente: \n");
	fflush(stdin);
	gets(nuevo->nombre);
	printf("Ingresa el apellido del paciente: \n");
	fflush(stdin);
	gets(nuevo->apellido);
	printf("Ingresa el direccion del paciente: \n");
	fflush(stdin);
	gets(nuevo->direccion);
	printf("Ingresa el telefono del paciente: \n");
	fflush(stdin);
	gets(nuevo->telefono);
	do{
		printf("Ingresa el edad del paciente: \n");
		fflush(stdin);
		scanf("%d",&nuevo->edad);
		if(nuevo->edad <= 0 || nuevo->edad > 100){
			printf("\nERROR. INGRESE DE NUEVO LA EDAD\n\n");
		}else break;
	}while(true);
	
	//RECORRIDO DOBLE ENLAZADA
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
	system("PAUSE");
}

//FUNCION MOSTRAR ASCENDIENTE
void mostrarAsc(){
	system("cls");
	actual = new Nodo();
	actual=primero;
	 
	if(primero!=NULL){
		while(actual!=NULL){
			printf("El codigo del paciente es %s \n",actual->codigo);
			printf("El nombre del paciente es %s \n",actual->nombre);
			printf("El apellido del paciente es %s \n",actual->apellido);
			printf("El direccion del paciente es %s \n",actual->direccion);
			printf("El telefono del paciente es %s \n",actual->telefono);
			printf("La edad del paciente es %d \n",actual->edad);
			printf("\n\n");
			actual=actual->siguiente;
		}	
	}else{
		printf("\nERROR.POR FAVOR LLENAR DATOS\n\n");
	}
	system("PAUSE");
}

//FUNCION MOSTRAR DESCENDIENTE
void mostrarDsc(){
	system("cls");
	actual = new Nodo();
	actual=ultimo;
	
	if(ultimo!=NULL){
		while(actual!=NULL){
			printf("El codigo del paciente es %s \n",actual->codigo);
			printf("El nombre del paciente es %s \n",actual->nombre);
			printf("El apellido del paciente es %s \n",actual->apellido);
			printf("El direccion del paciente es %s \n",actual->direccion);
			printf("El telefono del paciente es %s \n",actual->telefono);
			printf("La edad del paciente es %d \n",actual->edad);
			printf("\n\n");
			actual=actual->atras;
		}
	}else{
		printf("\nERROR.POR FAVOR LLENAR DATOS\n\n");
	}
	system("PAUSE");
}

//FUNCION ACTUALIZAR DATOS
void actualizarPaciente(){
	system("CLS");
	actual = new Nodo();
	short opc;
	char codigo[24];
	char aux[24];
	int auxNum;
	
	actual=primero;
	
	if(primero!=NULL){
		printf("Que codigo deseas actualizar: \n");
		fflush(stdin);
		gets(codigo);
		
		while(actual!=NULL){
			if(strcmp(codigo, actual->codigo) == 0){
				do{
					system("CLS");
					printf("\tEscoge opcion: \n1.Nombre del paciente:\n2.Apellido del paciente:\n3.Direccion del paciente:\n4.Telefono del paciente:\n5.Edad del paciente:\n6.Salir\n");
					scanf("%hi",&opc);
					switch(opc){
						case 1:
							printf("Ingrese actualizacion del nombre:\n");
							fflush(stdin);
							gets(aux);	
							strcpy(actual->nombre, aux);
							break;
						case 2:
							printf("Ingrese actualizacion del apellido:\n");
							fflush(stdin);
							gets(aux);
							strcpy(actual->apellido, aux);
							break;
						case 3:
							printf("Ingrese actualizacion del direccion:\n");
							fflush(stdin);
							gets(aux);
							strcpy(actual->direccion, aux);
							break;
						case 4:
							printf("Ingrese actualizacion del telefono:\n");
							fflush(stdin);
							gets(aux);
							strcpy(actual->telefono, aux);
							break;
						case 5:
							do{
								printf("Ingresa la actualizacion de la edad: \n");
								fflush(stdin);
								scanf("%d",&auxNum);
								actual->edad = auxNum;
								if(nuevo->edad <= 0 || nuevo->edad > 100){
									printf("\nERROR. INGRESE DE NUEVO LA EDAD\n\n");
								}else break;
							}while(true);
							break;
						case 6:
							return;
							break;
						default:
							printf("\n\tERROR\n");
							break;
					}
					system("PAUSE");
				}while(opc!=6);
				
			}
			actual=actual->siguiente;
		}
	}else{
		printf("\nERROR. LA LISTA ESTA VACIA PARA BUSCAR DATOS\n\n");
	}
	system("PAUSE");
}

//FUNCION BUSCAR DATO
void buscarPaciente(){
	system("CLS");
	actual = new Nodo();
	int auxEdad;
	int cont=0;
	
	actual=primero;
	
	if(primero!=NULL){
		printf("Que edad deseas buscar: \n");
		fflush(stdin);
		scanf("%d",&auxEdad);
		
		while(actual!=NULL){
			if(auxEdad==actual->edad ){
				printf("El codigo del paciente es %s\n",actual->codigo);
				printf("El nombre del paciente es %s \n",actual->nombre);
				printf("El apellido del paciente es %s \n",actual->apellido);
				printf("El direccion del paciente es %s \n",actual->direccion);
				printf("El telefono del paciente es %s \n",actual->telefono);
				printf("La edad del paciente es %d \n",actual->edad);
				printf("\n\n");	
				cont=1;
			}
			actual=actual->siguiente;	
		}
		if(cont==0){
			printf("\nERROR. NO EXISTE EN LA BASE DE DATOS\n\n");
		}	
	}else{
		printf("\nERROR. LA LISTA ESTA VACIA PARA BUSCAR DATOS\n\n");
	}
	system("PAUSE");
}

//FUCION ELIMINAR DATOS
void eliminarDatos(){
	system("CLS");
	actual = new Nodo();
	Nodo *anterior= new Nodo();
	char codigo[24];
	int cont=0;
	
	anterior=NULL;
	actual=primero;
	
	if(primero!=NULL){
		printf("Que codigo deseas buscar para eliminar: \n");
		fflush(stdin);
		gets(codigo);
		
		while(actual!=NULL){
			if(strcmp(codigo, actual->codigo) == 0 ){
				printf("El codigo del paciente es %s\n",actual->codigo);
				printf("El nombre del paciente es %s \n",actual->nombre);
				printf("El apellido del paciente es %s \n",actual->apellido);
				printf("El direccion del paciente es %s \n",actual->direccion);
				printf("El telefono del paciente es %s \n",actual->telefono);
				printf("La edad del paciente es %d \n",actual->edad);
				printf("\n\n");
				
				//CUANDO HAY UNO
				if(actual->atras==NULL && actual->siguiente==NULL){
					primero=NULL;
					ultimo=NULL;
				//CUANDO ES EL PRIMERO
				}else if(actual==primero){
					primero=primero->siguiente;
					primero->atras=NULL;
				//CUANDO ES EL ULTIMO
				}else if(actual==ultimo){
					anterior->siguiente=NULL;
					ultimo=anterior;
				//CUANDO ESTA EN LA MITAD
				}else{
					anterior->siguiente=actual->siguiente;
					actual->siguiente->atras=anterior;
				}
				
				free(actual);
				printf("\nFUE ELIMINADO\n\n");
				cont=1;
				break;
			}
			if(cont==0){
				printf("\nERROR. NO EXISTE EN LA BASE DE DATOS\n\n");
			}
			
			anterior=actual;
			actual=actual->siguiente;
		}
			
	}else{
		printf("\nERROR. LA LISTA ESTA VACIA PARA BUSCAR DATOS\n\n");
	}
	system("PAUSE");
}
