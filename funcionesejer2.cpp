#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,max,min;
 printf("ingresa tres numeros\n");
 scanf("%d%d%d",&a,&b,&c);
 max=a;
 if(b>max)
 max=b;
 if(c>max)
 max=c;
 printf("el numero mayor es %d\n",max);
 
 
 min=a;
 if (b<min)
 min=b;
 if(c<min)
 min=c;
 printf("el numero menor es %d\n",min);


system("PAUSE");
	return 0;
}
