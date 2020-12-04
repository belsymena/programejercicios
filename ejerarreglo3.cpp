#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	{
 int temp[24];
 float media;
 int hora;
 for( hora=0; hora<24; hora++ )
 {
 printf( "Temperatura de las %i: ", hora );
 scanf( "%i", &temp[hora] );
 media += temp[hora];
 }
 media = media / 24;
 printf( "\nLa temperatura media es %f\n", media );
 } 

	return 0;
}
