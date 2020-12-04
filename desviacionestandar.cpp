#include <iostream>
#include<math.h>
#include<conio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, cant;
 float varianza=0, desv_estandar=0, media=0, suma_valores=0;
 float lista[cant];
 
 cout<<"Ingrese los numeros: ";
 cin>>cant;
 
 for(i=0; i<cant; i++) 
 { cin>>lista[i]; }
 
 for(i=0; i<cant; i++) 
 { suma_valores+=lista[i]; }
 
 media=suma_valores/cant;
 
 for(i=0; i<cant; i++) 
 { varianza=varianza+pow((lista[i]-media),2); }
 
 desv_estandar=sqrt(varianza/(cant-1));
 
 system("cls");
 cout<<"\nLa suma de los numeros es: "<<suma_valores<<endl;
 cout<<"\nLa media es: "<<media<<endl;
 cout<<"La desviacion estandar es: "<<desv_estandar<<endl;
	return 0;
}
