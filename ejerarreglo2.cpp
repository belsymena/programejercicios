#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x,cont,z,i,tabla[100];
	i=0;
	for (x=0;x<=100;x++)
	{
	cont=0;
	if (x%2==0)
	{
	tabla[i]=x;
	i++;
	}
  }
  for (x=0;x<i;x++)
  {
  printf("%d\n",tabla[x]);
  }
system("PAUSE");
	return 0;
}
