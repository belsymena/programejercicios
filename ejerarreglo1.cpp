#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x,tabla[100];
	for (x=1;x<=100;x++)
	{
	tabla[x]=1;
	}
	for (x=1;x<=100;x++)
	{
	printf("%d\n",tabla[x]);
	}
	system("PAUSE");
	return 0;
}
