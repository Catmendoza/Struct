#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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
struct Arbol{
	int dato;
	
	Arbol *padre;
	Arbol *derecha;
	Arbol *izquierda;
};

Arbol *crear(int dato, Arbol *padre){
	Arbol *nuevoArbol = new Arbol();
	
	nuevoArbol->dato = dato;
	nuevoArbol->padre = padre;
	nuevoArbol->derecha = NULL;
	nuevoArbol->izquierda = NULL;
	
	return nuevoArbol;
}

void insertarArbol(Arbol *&raiz, int dato, Arbol *padre){
	// EN CASO DE NO TENEER UNA RAIZ ASIGNADA
	if(raiz == NULL){
		raiz = crear(dato, padre);
	} else {
		int valorRaiz = raiz->dato;
		if(dato < valorRaiz){
			insertarArbol(raiz->izquierda, dato, raiz);
		} else {
			insertarArbol(raiz->derecha, dato, raiz);
		}
	}
}

void mostrarArbol(Arbol *raiz, int contador){
	if(raiz == NULL){
		return;
	} else {
		mostrarArbol(raiz->derecha, contador + 1);
		for(int i = 0; i < contador; i++){
			printf("\t");
		}
		printf("%d\n", raiz->dato);
		mostrarArbol(raiz->izquierda, contador + 1);
	}
}

bool compararArboles(Arbol *raiz_1, Arbol *raiz_2){
	if(raiz_1 == raiz_2){
		return true;
	}
	if(raiz_1 == NULL || raiz_2==NULL){
		return false;
	}
	return((raiz_1->dato==raiz_2->dato) && compararArboles(raiz_1->derecha,raiz_2->derecha) && compararArboles(raiz_1->izquierda,raiz_2->izquierda));
}

bool busquedaArbol(Arbol *raiz, int dato){
	if(raiz == NULL){
		return false;
	} else if(raiz->dato == dato){
		return true;
	} else if(dato < raiz->dato){
		return busquedaArbol(raiz->izquierda, dato);
	} else {
		return busquedaArbol(raiz->derecha, dato);
	}
}

void menu(){
	Arbol *raiz_1=NULL, *raiz_2=NULL;
	short opc;
	int dato;
	
	do{
		printf("\tBIENVENIDOS\n");
		printf("1.Insertar arbol 1\n2.Insertar arbol 2\n3.Mostrar arbol 1\n4.Mostrar arbol 2\n5.Comparar arbol 1 con arbol 2\n6.Salir\n");
		scanf("%hi",&opc);
		
		switch(opc){
			case 1:
				do{
					printf("Ingrese nuevo elemento\n");
					scanf("%d",&dato);
					if(busquedaArbol(raiz_1, dato)){
						printf("Error, el elemento ya existe.\n\n");
						system("PAUSE");
						printf("\n\n");
					}
				}while(busquedaArbol(raiz_1, dato));
				
				insertarArbol(raiz_1, dato, NULL);
				printf("\n");
				break;
			case 2:
				do{
					printf("Ingrese nuevo elemento\n");
					scanf("%d",&dato);
					if(busquedaArbol(raiz_2, dato)){
						printf("Error, el elemento ya existe.\n\n");
						system("PAUSE");
						printf("\n\n");
					}
				}while(busquedaArbol(raiz_2, dato));
				insertarArbol(raiz_2, dato, NULL);
				printf("\n");
				break;
			case 3:
				mostrarArbol(raiz_1,0);
				break;
			case 4:
				mostrarArbol(raiz_2,0);
				break;
			case 5:
				if(compararArboles(raiz_1,raiz_2)){
					printf("SON IGUALES.\n");
				}else {
					printf("NO SON IGUALES.\n");
				}
				break;
			case 6:
				break;
			default:
				printf("\nERROR\n");
				break;
		}
		printf("\n\n");
		system("PAUSE");
		system("cls");
	}while(opc!=6);
}

int main(){
	portada();
	menu();
	
	return 0;
}
