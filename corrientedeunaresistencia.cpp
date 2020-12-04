#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {int opcion;
	int r1,r2,r3,r15,r26,r37;
	int v;
	int tipo;
	do {
        
	printf("Menu\n");
	printf("1. Ingresar Resistencias\n");
	printf("2. Ingresar Voltaje\n");
	printf("3. Calcular\n");
	printf("4. SALIR\n");
	printf("Elija una operacion: \n");
	scanf("%d",&opcion);
 
                	                 
	switch(opcion)
	{
		case 1:
             
            printf("Que tipo de circuito es?\n 1)R en Paralelo\n 2)R en Serie\n");
            scanf("%d",&tipo);
           switch(tipo)
	{      
           case 2:
                tipo=tipo;
                printf ("Digite el valor de R1: ");
                scanf ("%d", &r1);
                printf ("Digite el valor de R2: ");
                scanf ("%d", &r2);
                printf("Digite el valor de R3: ");
                scanf ("%d", &r3);
                break;
           case 1:
                tipo=tipo;
                printf ("Digite el valor de R15: ");
                scanf ("%d", &r15);
                printf ("Digite el valor de R26: ");
                scanf ("%d", &r26);
                printf("Digite el valor de R37: ");
                scanf ("%d", &r37);
                break;
           default:
                   printf("incorrecto");
                }
                
            break;
		case 2:
             
			printf ("Digite el Voltaje de la fuente ");
                scanf("%d", &v);
			break;
		case 3:
             int RTSerie;
             float RTParaleloA;
             float RTParaleloB;
             float I,I2;
             RTSerie= r1+r2+r3;
             if(tipo==2){
             //usamos RTSerie..
    			printf("suma Rs: %d\n",RTSerie);
    			printf("Voltaje Fuente %d\n",v);
    			printf("I:%f \n",I);
    			I= (float)v/(float)RTSerie;
    			   printf("Por lo tanto la Intesidad del circuito con resistencias en serie es: %f \n",I);
               }else{
               //Usamos RTParalelo..
    			
                RTParaleloA=(1/(float)r15)+(1/(float)r26)+(1/(float)r37);
                RTParaleloB=(float)1/(float)RTParaleloA;
    			printf("RTotal Paralelo %f",RTParaleloB);
    			I2= (float)v/ RTParaleloB;
    			printf("I:%f \n",I2);
                             printf("Por lo tanto la Intesidad del circuito con resistencias en paralelo es: %f \n",I2);
                             }
            
            
            
		  break;
		  case 4:
               break;
		default: 
			printf("Opcion no valida\n");		
	}
	}
    while(opcion!=4);
	system("pause");
	return 0;
}
