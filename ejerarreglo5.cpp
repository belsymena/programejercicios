#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main()
{
	int i,j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if (i == j)
			{
				cout<<1<<" ";
			}
			else
			{
				cout<<0<<" ";
			}
		}
		cout << endl;
	}
}
