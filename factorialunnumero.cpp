#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define TAM_MAX 100
long f(long n);
int main(int argc, char** argv) {
	
    int i,tam,num[TAM_MAX];
    long v[TAM_MAX];
 
    cout << "Tam del vector: ";
    cin >> tam;
    cout << endl;
 
    if (tam > TAM_MAX)
        cout << "Capacidad llena. Solo se pueden almacenar 100 numeros";
    else {
        for (i=0; i<tam; i++) {
            cout << "Ingrese numero " << i+1 << ": ";
            cin >> num[i];
        }
    }
    
    for (i=0; i<tam; i++)
        v[i] = f(num[i]);
        
    cout << endl;
    cout << "Vector factorial resultante\n";
    for (i=0; i<tam; i++)
        cout << v[i] << " ";
 
    return 0;
}
long f(long n) {
    long result;
 
    if ((n == 1) || (n == 0))
        result = 1;
    else
        result = n * f(n-1);
 
    return result;
}
