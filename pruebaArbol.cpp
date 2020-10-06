#include <stdio.h>
#include <stdlib.h>

struct Arbol{
	int dato;
	
	Arbol *padre;
	Arbol *derecha;
	Arbol *izquierda;
};

Arbol *raiz = NULL;

Arbol *crear(int dato, Arbol *padre){
	Arbol *nuevoNodo = new Arbol();
	
	nuevoNodo->dato = dato;
	nuevoNodo->padre = padre;
	nuevoNodo->derecha = NULL;
	nuevoNodo->izquierda = NULL;
	
	return nuevoNodo;
}

void insertarNodo(Arbol *&raiz, int dato, Arbol *padre){
	// EN CASO DE NO TENEER UNA RAIZ ASIGNADA
	if(raiz == NULL){
		raiz = crear(dato, padre);
	} else {
		int valorRaiz = raiz->dato;
		if(dato < valorRaiz){
			insertarNodo(raiz->izquierda, dato, raiz);
		} else {
			insertarNodo(raiz->derecha, dato, raiz);
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

Arbol *bus(Arbol *raiz, int dato){
	if(raiz == NULL){
		return NULL;
	} else if(raiz->dato == dato){
		return raiz;
	} else if(dato < raiz->dato){
		return bus(raiz->izquierda, dato);
	} else {
		return bus(raiz->derecha, dato);
	}
}

void eliminarNodo(Arbol *raiz, int dato){
	Arbol *n;
	Arbol *padre;
	Arbol *derecha;
	Arbol *izquierda;
	
	n = bus(raiz, dato);
	
	if(n){
		if(n->derecha == NULL && n->izquierda == NULL){
			padre = n->padre;
			if(padre->derecha == n){
				padre->derecha = NULL;
				free(n);
			} else {
				padre->izquierda = NULL;
				free(n);
			}
		} else {
			if(n->derecha != NULL && n->izquierda != NULL){
				padre = n->padre;
			} else {
				if(n->derecha != NULL){
					derecha = n->derecha;
					padre = n->padre;
					if(padre->derecha == n){
						padre->derecha = derecha;
						free(n);
					} else {
						padre->izquierda = derecha;
						free(n);
					}
				} else {
					izquierda = n->izquierda;
					padre = n->padre;
					if(padre->derecha == n){
						padre->derecha = izquierda;
						free(n);
					} else {
						padre->izquierda = izquierda;
						free(n);
					}
				}
			}
		}
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
				insertarNodo(raiz, dato, NULL);
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
