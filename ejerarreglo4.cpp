#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
#define ALTURA 3
#define ANCHURA 3
int main(int argc, char** argv) {
	int matriz[ALTURA][ANCHURA] = {
            {20,  50, 80},
            {500, 12, 44},
            {56,  4,  3},
    };
    int menor = matriz[0][0];
    int mayor = matriz[0][0];
    for (int y = 0; y < ALTURA; y++) 
	{
        for (int x = 0; x < ANCHURA; x++) 
		{
            int elementoActual = matriz[y][x];
            if (elementoActual > mayor) mayor = elementoActual;
            if (elementoActual < menor) menor = elementoActual;
        }
    }
    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);
	return 0;
}
