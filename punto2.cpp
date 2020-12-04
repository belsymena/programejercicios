#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct banco
{
	string nombre;
	int id;
	int edad;
	int semestre;
};
int main(int argc, char** argv) {
	banco x;
	x.nombre= "belsy mena";
	x.edad=20;
	x.id=1003986970;
	x.semestre=3;
	cout<<"el nombre es "<<x.nombre<<endl;
	cout<<"la edad es "<<x.edad<<endl;
	cout<<"el id es "<<x.id<<endl;
	cout<<"el semestre academico es "<<x.semestre<<endl;
	return 0;
}
