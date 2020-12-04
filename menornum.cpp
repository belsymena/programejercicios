#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,i,n,prom,menor,mayor;
	cout<<"ingrese la cantidad de numeros"<<endl;
	cin>>num;
	for (i=0;i<num;i++)
	{
		cout<<"ingrese los numeros"<<i<<endl;
		cin>>n;
		(prom=prom+n);
	}
	for (i=0;i<num;i++)
	{	
	if (n<menor);
	{
		menor=n;
	}
	prom=prom+n;
    }
	cout<<"el menor es "<<menor<<endl;
	cout<<"el promedio es "<<prom/num<<endl;
	return 0;
}
