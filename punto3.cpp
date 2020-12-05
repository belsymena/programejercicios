#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
unsigned factorial(unsigned);
unsigned factorial(unsigned num) {
    int result = 0;
    int contador = 0;
    if (num == 0) {
        result=1;
    } else {
        result=1;
        for(contador=num; contador>0; contador--) {
            result*=contador;
        }
    }
    return result;
}
int main(int argc, char** argv) {
	int filas = 0;
    int columnas = 0;
    int contador = 0;
    int posicion = 0;
    int b = 0;
    int c = 0;
    int calculo = 0;
    printf("No.Filas: ");
    scanf(" %d",&filas);
    for(contador=filas-1; contador>=0; contador--) 
	{
        columnas+=contador;
    }
    int triangulo[columnas];
    for(b=0; b<filas-1; b++) 
	{
        for(c=0; c<=b; c++)
		 {
           calculo = factorial(b)/(factorial(c)*factorial(b-c));
           triangulo[posicion]=calculo;
           posicion++;
        }
    }

    posicion=0;
    for(b=0;b<filas-1;b++) {
        printf("\n%*c",(int) (columnas/2)-b,' ');
        for(c=0;c<=b;c++) {
            printf("%d ",triangulo[posicion]);
            posicion++;
        }
    }
	return 0;
}
