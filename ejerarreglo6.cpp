#include <iostream>
#include <cstdlib>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int num=1;
	int anterior=0;
	int aux;
	for (int i=0; i<20; i++){
		printf("%d, ", num);
		aux=num;
		num+=anterior;
		anterior=aux;
	}
	printf("\n\n\n");system("pause");
	return 0;
}
