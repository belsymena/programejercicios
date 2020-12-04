#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float a,b,c;
	float x1,x2;
	cout<<"imgrese el coeficiente 2 grado: ";
	cin>>a;
	cout<<"ingrese el coeficiente 1 grado: ";
	cin>>b;
	cout<<"ingrese el coeficiente independiente: ";
	cin>>c;
	if (a!=0)
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b+sqrt(b*b-4*a*c))/(2*a);
		cout<<"las raices son "<<x1<<"y"<<x2<<endl;
	}
	system("PAUSE");
	return 0;
}
