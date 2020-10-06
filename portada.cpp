#include <stdio.h>
#include <conio.h>
#include "gotoxy.h"
#include "colores.h"

/* LIBRERIA COLORES 
Colores :
BLACK			0 Negro
BLUE			1 Azul
GREEN			2 Verde
CYAN			3 Cían
RED				4 Rojo
MAGENTA			5 Magenta
BROWN			6 Marrón
LIGHTGRAY		7 Gris Claro
DARKGRAY		8 Gris Oscuro
LIGHTBLUE		9 Azul Claro
LIGHTGREEN		10 Verde Claro
LIGHTCYAN		11 Cían Claro
LIGHTRED		12 Rojo Claro
LIGHTMAGENTA	13 Magenta Claro
YELLOW			14 Amarillo
WHITE			15 Blanco
*/



main(){

system("color 18");

color(1,14);
gotoxy(28,5);printf("D");
gotoxy(28,6);printf("D");
gotoxy(28,7);printf("D");
gotoxy(28,8);printf("D");
gotoxy(28,9);printf("D");
gotoxy(28,10);printf("D");
gotoxy(29,5);printf("D");
gotoxy(30,5);printf("D");
gotoxy(31,6);printf("D");
gotoxy(32,7);printf("D");
gotoxy(32,8);printf("D");
gotoxy(31,9);printf("D");
gotoxy(30,10);printf("D");
gotoxy(29,10);printf("D");

gotoxy(35,5);printf("M");
gotoxy(35,6);printf("M");
gotoxy(35,7);printf("M");
gotoxy(35,8);printf("M");
gotoxy(35,9);printf("M");
gotoxy(35,10);printf("M");
gotoxy(36,5);printf("M");
gotoxy(37,6);printf("M");
gotoxy(38,7);printf("M");
gotoxy(39,8);printf("M");
gotoxy(40,8);printf("M");
gotoxy(41,7);printf("M");
gotoxy(42,6);printf("M");
gotoxy(43,5);printf("M");
gotoxy(44,5);printf("M");
gotoxy(44,6);printf("M");
gotoxy(44,7);printf("M");
gotoxy(44,8);printf("M");
gotoxy(44,9);printf("M");
gotoxy(44,10);printf("M");

gotoxy(47,5);printf("G");
gotoxy(48,5);printf("G");
gotoxy(49,5);printf("G");
gotoxy(50,5);printf("G");
gotoxy(51,5);printf("G");
gotoxy(47,6);printf("G");
gotoxy(47,7);printf("G");
gotoxy(47,8);printf("G");
gotoxy(47,9);printf("G");
gotoxy(47,10);printf("G");
gotoxy(48,7);printf("G");
gotoxy(49,7);printf("G");
gotoxy(50,7);printf("G");
gotoxy(51,7);printf("G");
gotoxy(51,8);printf("G");
gotoxy(51,9);printf("G");
gotoxy(48,10);printf("G");
gotoxy(49,10);printf("G");
gotoxy(50,10);printf("G");
gotoxy(51,10);printf("G");

color(1,7);
gotoxy(23,14);printf("CENTRO EDUCATIVO CULTURAL MORELOS");
gotoxy(28,16);printf("INGENIERIA EN SISTEMAS");
gotoxy(29,18);printf("PROGRAMACION EN C++");
gotoxy(33,20);printf("23/03/2016");


getch();


}
