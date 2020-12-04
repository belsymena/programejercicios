#include <iostream>
	#include <cmath>
 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
    int N, numero, producto = 1;
 
    cout << "\nN: "; cin >> N;
 
    cout << endl;
    for (int i = 1; i <= N; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;
 
        producto *= numero;
    }
 
    cout << "\nLa media geometrica es: " << sqrt(producto) << endl;
	return 0;
}
