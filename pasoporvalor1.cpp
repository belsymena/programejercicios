#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int num=0,fact=0;
	cout<<"ingrese un numero:";
	cin>>num;
	fact=num;
	for(int i=num-1; i>=1; i--){
		fact=fact*i;
	}
	cout<<"el factorial de "<<num<<" es "<<fact<<"\n";
	system("pause");
	return 0;
}
