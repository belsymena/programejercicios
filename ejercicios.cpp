#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int dia,hora;
	cout<<"por favor dgite el dia y la hora en que se encuentra"<<endl;
	cout<<"digite 1 lunes"<<endl<<"2 martes"<<endl<<"3 miercoles"<<endl<<"4 jueves"<<endl<<"5 viernes"<<endl;
	cin>>dia;
	cout<<"seguido, digite la hora en formato militar"<<endl;
	cin>>hora;
	dia=3;
	if(dia==3)
	{
		if(hora >=14 && hora < 16 )
		{
			cout<<"se encuentra en clase de programacion"<<endl;
		}
		else
		{
			cout<<"no se encuentra en clase de programacion"<<endl;
		}
	}
	if(dia==1 || dia==2 || dia==4);
	{
		cout<<"no tiene clase de programacion"<<endl;
	}
	return 0;
}
