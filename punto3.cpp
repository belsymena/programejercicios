#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
unsigned factorial(unsigned);
unsigned factorial(unsigned numero) {
    int resultado = 0;
    int contador = 0;
    if (numero == 0) {
        resultado=1;
    } else {
        resultado=1;
        for(contador=numero; contador>0; contador--) {
            resultado*=contador;
        }
    }
    return resultado;
}
int main(int argc, char** argv) {
	int filas = 0;
    int columnas = 0;
    int contador = 0;
    int posicion = 0;
    int f = 0;
    int c = 0;
    int calculo = 0;
    printf("No.Filas: ");
    scanf(" %d",&filas);
    for(contador=filas-1; contador>=0; contador--) 
	{
        columnas+=contador;
    }
    int triangulo[columnas];
    for(f=0; f<filas-1; f++) 
	{
        for(c=0; c<=f; c++)
		 {
           calculo = factorial(f)/(factorial(c)*factorial(f-c));
           triangulo[posicion]=calculo;
           posicion++;
        }
    }

    posicion=0;
    for(f=0;f<filas-1;f++) {
        printf("\n%*c",(int) (columnas/2)-f,' ');
        for(c=0;c<=f;c++) {
            printf("%d ",triangulo[posicion]);
            posicion++;
        }
    }
	return 0;
}
