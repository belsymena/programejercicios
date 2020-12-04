#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float prom(float nota1,float nota2,float nota3,float conta)
{
	float prom;
	prom=(nota1+nota2+nota3)/3;
	return(prom);
}

int main(int argc, char** argv) 
{
	float nota1,nota2,nota3,i,n,notafinal,contr,conta;
	cout<<"ingrese cantidad de alumnos"<<endl;
	cin>>n;
	contr=0;
	conta=0;
	for(i=1;i<=n;i++)
	{
		cout<<"ingrese nota"<<endl;
		cin>>nota1;
		cout<<"ingrese nota"<<endl;
		cin>>nota2;
		cout<<"ingrese nota"<<endl;
		cin>>nota3;
		notafinal=prom(nota1,nota2,nota3,conta);
		if(notafinal>=2.96)
		{
			cout<<"el alumno ha aprobado programacion.\n"<<endl;
			contr=contr+1;
		}
		else
		cout<<"el alumno ha reprobado programacion.\n"<<endl;
		conta=conta+1;
	}
	 conta=conta-1;
	   {
	   	cout<<"numero de alumnos aprobados es de "<<""<<contr<<endl;
	   	cout<<"numero de alumnos reprobados es de "<<""<<conta<<endl;
	   }
	return 0;
}
