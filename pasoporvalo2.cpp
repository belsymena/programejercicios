#include <iostream>
#include <conio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float distance(float, float, float, float);
int main(int argc, char** argv) 
{
	float x_1, x_2;
    float y_1, y_2;
    float x,y;
    float distancia=0;
 
    cout << "INGRESE LOS DATOS EL PRIMER PUNTO: \n";
    cout << "Ingrese el valor del eje x: "; cin >> x_1;
    cout << "Ingresw el valor del eje y: "; cin >> y_1;
 
    cout << "INGRESE LOS DATOS EL SEGUNDO PUNTO: \n";
    cout << "Ingrese el valor del eje x: "; cin >> x_2;
    cout << "Ingrese el valor del eje y: "; cin >> y_2;

    x = x_1 - x_2;
    y = y_1 - y_2;
    distancia = sqrt( pow(x, 2) + pow( y, 2) );
 
    cout << endl << endl;

    cout << "La distancia entre los dos puntos es: " << distancia << endl;
 
    getch(); 
return 0;
}
