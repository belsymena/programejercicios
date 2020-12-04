#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
# include <math.h>
# include <iomanip>
# include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char s,r,m,d,o,n;
char rp;
float a,b,resul;
cout<< "Bienvenido al Operador Automatico"<<endl;
cout<< "Seleccione la operacion a realizar: Suma S,Resta R, Multiplicación M o Division D"<< endl;
cin>> o;
system("cls");
cout<< "Ahora indique el primer numero de la operacion:"<<endl;
cin>>a;
system("cls");
cout<< "Indique el segundo numero de la operacion:"<<endl;
cin>>b;
system("cls");
if (o=='s') {
resul=a+b;
}
else
if (o=='r'){
resul=a-b;
}
else
if (o=='m'){
resul=a*b;
}
else
if (o=='d'){
resul=a/b;
}
system("cls");
cout<<"El Resultado de su operacion es:"<<resul<<endl;
{
cout<<"\nDesea otra operacion [enter] o presione [N] para salir?";
rp=toupper(getch());
if (rp=='N') ;
}
	return 0;
}
