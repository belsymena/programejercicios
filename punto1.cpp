
#include <iostream>

using namespace std;

int main()
{
    int numeros[10];
    int numero;
    int contador = 0;

    cout << "Ingrese 10 numeros enteros: " << endl;
    for(int indice=0; indice<10; indice++)
    {
        cin >> numeros[indice];
    }

    cout << "Ingrese el numero a buscar: " << endl;
    cin >> numero;

    for(int indice=0; indice<10; indice++)
    {
        if(numeros[indice] == numero)
        {
            cout << "El numero " << numero << " se encontro en la posicion " << indice << endl;
            contador++;
        }
    }

    if(contador > 0)
    {
        cout << "Se encontraron " << contador << " coincidencias en la busqueda." << endl;
    }
    else
    {
        cout << "El numero " << numero << " no se encontro en el array." << endl;
    }

    return 0;
}
