#include <iostream>
#include <cmath>

using namespace std;

int *sumatoria;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float media= 0;
     int cantidad;
     float varianza= 0;
     
     system("color 0c");
     
      cout<<"\PROGRAMA PARA CALCULAR LA MEDIA ARITMETICA\n";
     cout<<"\nCuantos numeros son? ";
     cin>>cantidad;
     
     sumatoria = new int[cantidad];
     
     for(int i= 0;i < cantidad;i++)
     {
        cout<<"Escribe el valor "<<i+1<<":";
        cin>>sumatoria[i];
    }
    
    for(int e = 0;e < cantidad;e++)
    {
         media = media + sumatoria[e];
    }
    
    media = media / cantidad;
    
    system("cls");
    
    cout<<"La Media es: ";
    cout<<media<<endl;
    
    for(int k = 0;k < cantidad;k++)
    {
         varianza = varianza + (((sumatoria[k])-(media))*((sumatoria[k])-(media)));
    }
    varianza = varianza / cantidad;
    cout<<"la varianza es: ";
    cout<<varianza<<endl;
    cout<<"La desviacion estandar es +/-: ";
    cout<<sqrt(varianza);
    
    delete[] sumatoria;
    system("PAUSE>nul");
	return 0;
}
