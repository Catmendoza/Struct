#include <stdio.h>
#include <stdlib.h>

struct Arbol{
	int dato;
	
	Arbol *derecha;
	Arbol *izquierda;
};

Arbol *raiz = NULL;
int numNodos=0;

Arbol *crear(int dato){
	Arbol *nuevoNodo = new Arbol();
	nuevoNodo->dato = dato;
	nuevoNodo->derecha = NULL;
	nuevoNodo->izquierda = NULL;
	
	return nuevoNodo;
}

void insertarNodo(Arbol *&raiz, int dato){
	// EN CASO DE NO TENEER UNA RAIZ ASIGNADA
	if(raiz == NULL){
		raiz = crear(dato);
	} else {
		if(dato < raiz->dato){
			insertarNodo(raiz->izquierda, dato);
		} else {
			insertarNodo(raiz->derecha, dato);
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
		numNodos++;
		printf("%d\n", raiz->dato);
		mostrarArbol(raiz->izquierda, contador + 1);
	}
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

Arbol *unirABB(Arbol *izq, Arbol *der){
	if(izq == NULL)
		return der;
	if(der == NULL)
		return izq;
		
	Arbol *centro = unirABB(izq->derecha, der->izquierda);
	izq->derecha = centro;
	der->izquierda = izq;
	return der;
}

void eliminarNodo(Arbol *raiz, int dato){
	if(raiz == NULL){
		return;
	}
	
	if(dato < raiz->dato)
		eliminarNodo(raiz->izquierda, dato);
	else if(dato > raiz->dato)
		eliminarNodo(raiz->derecha, dato);
	else {
		Arbol *p = raiz;
		raiz = unirABB(raiz->izquierda, raiz->derecha);
		delete p;
	}
}

void menu(){
	short opc;
	int dato,cont=0,n;
	
	do{
		printf("\tBIENVENIDOS\n");
		printf("1.Insertar nuevo nodo\n2.Mostrar arbol\n3.Buscar elementos\n4.Eliminar nodos\n5.Salir\n");
		scanf("%hi",&opc);
		
		switch(opc){
			case 1:
				printf("Ingrese nuevo elemento\n");
				scanf("%d",&dato);
				insertarNodo(raiz, dato);
				printf("\n");
				system("PAUSE");
				system("cls");
				break;
			case 2:
				mostrarArbol(raiz,0);
				break;
			case 3:
				printf("Ingrese elemento a buscar\n");
				scanf("%d",&n);
				if(busquedaArbol(raiz,n)){
					printf("ELEMENTO %d ENCONTRADO\n",n);
				}else{
					printf("ELEMENTO NO ENCONTRADO\n");
				}
				printf("\n");
				break;
			case 4:
				printf("Ingrese elemento a buscar\n");
				scanf("%d",&n);
				eliminarNodo(raiz, n);
				break;
			case 5:
				break;
			default:
				printf("\nERROR\n");
				break;
		}
	}while(opc!=5);
}

main(){
	menu();	
}
