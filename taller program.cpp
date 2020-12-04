#include <iostream>
#include <cstdlib>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int v[20];
int i;
srand(time(NULL));
for (i=0; i<20; i++){
	v[i]=12+rand()%(35-12+1);printf("%d ",v[i]);
}
	
	return 0;
}
