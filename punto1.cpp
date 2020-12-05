
#include <iostream>

using namespace std;

int main()
{
    int num[10];
    int num;
    int contador = 0;

    cout << "Ingrese 10 numeros enteros: " << endl;
    for(int indice=0; indice<10; indice++)
    {
        cin >> nume[indice];
    }

    cout << "Ingrese el numero a buscar: " << endl;
    cin >> num;

    for(int indice=0; indice<10; indice++)
    {
        if(num[indice] == num)
        {
            cout << "El numero " << num << " se encontro en la posicion " << indice << endl;
            contador++;
        }
    }

    if(contador > 0)
    {
        cout << "Se encontraron " << contador << " coincidencias en la busqueda." << endl;
    }
    else
    {
        cout << "El numero " << num<< " no se encontro en el array." << endl;
    }

    return 0;
}
