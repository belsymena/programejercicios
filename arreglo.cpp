#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x[11]={1,2,3,4,5,6,7,8,9,10};
int numlt,i;
printf("\nIngrese un numero: ");
scanf("%d",&numlt);
for(i=0;i< 11;i++){

    printf("%d * ",x[i]);

    printf("%d = ",numlt);
    x[i] *= numlt;
    printf("%d\n",x[i]);
}
	return 0;
}
