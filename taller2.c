#include <stdio.h>
#include <conio.h>

int i,n;
void datosMenu();
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
	printf("----------------------------"); 
	printf("\n\tERROR.\n");
	printf("----------------------------\n\n"); 
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
			printf("\nEl promedio mayor es: %.1f\n",menor);
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
				errror();
			break;
		}
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
		printf("Ingresa la edad del estudiante %d:\n",i+1);
		scanf("%d",&est[i].edad);
		fflush(stdin);
		printf("Ingresa la fecha de nacimiento del estudiante %d\n",i+1);
		printf("Ingrese el dia:\n");
		scanf("%d",&est[i].nacer.dia);
		fflush(stdin);
		printf("Ingrese el mes:\n");
		scanf("%d",&est[i].nacer.mes);
		fflush(stdin);
		printf("Ingrese el anio:\n");
		scanf("%d",&est[i].nacer.anio);
		fflush(stdin);
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
		printf("Ingresa la nota1 del estudiante %d:\n",i+1);
		scanf("%f",&est[i].nota1);
		fflush(stdin);
		printf("Ingresa la nota2 del estudiante %d:\n",i+1);
		scanf("%f",&est[i].nota2);
		fflush(stdin);
		printf("Ingresa la nota3 del estudiante %d:\n",i+1);
		scanf("%f",&est[i].nota3);
		fflush(stdin);
		est[i].promedio=(float)(est[i].nota1+est[i].nota2+est[i].nota3)/3;
		printf("\n\n");
		
	}
}

void datosMenu(){
	short opc;
	do{
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
		
	}while(opc!=4);
}

int main(void){
	datosMenu();
}
