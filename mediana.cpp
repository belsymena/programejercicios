#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
 using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int funcionQueCompara(const void *a, const void *b)
 {
	int aInt = *(int *) a;
    int bInt = *(int *) b;
    return bInt - aInt;
}
int main(void) {
    int arreglo[] = {28, 11, 96, 21, 97, 6, 18, 13, 1, 19, 51};
    int tamanioElemento = sizeof arreglo[0];
    int longitud = sizeof arreglo / tamanioElemento;
    int sumatoria = 0;
    for (int x = 0; x < longitud; x++) {
        sumatoria += arreglo[x];
    }
    float media = (float) sumatoria / (float) longitud;
    qsort(arreglo, longitud, tamanioElemento, funcionQueCompara);

    int mitad = longitud / 2;
    int mediana;
    if (longitud % 2 == 0) {
        mediana = (arreglo[mitad - 1] + arreglo[mitad]) / 2;
    } else {
        mediana = arreglo[mitad];
    }
    printf("Imprimendo arreglo:\n");
    for (int x = 0; x < longitud; x++) {
        printf("%d ", arreglo[x]);
    }
    printf("\nMediana: %d", mediana);
    printf("\nMedia: %f", media);
	
	return 0;
}
