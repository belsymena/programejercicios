#include <iostream>
# include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {

float galones, litros;
cout<<"galones\t\tlitros"<<endl;
for(galones=0.0;galones<=100;galones+=5)
{litros=galones*3.785;
cout<<galones<<"\t\t"<<litros<<endl; }
getch();
	
	return 0;
}
