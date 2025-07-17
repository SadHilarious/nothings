#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//---------------------------
long sum(long x, int n) {
	long s;
	//Begin your statements here
int i;
	s = 0;
	for(i = 1; i <= n; i++) {
		s += pow(x, i);
	}
	//End your statements
	return s;
}
//---------------------------
int main() { // DO NOT EDIT THE main FUNCTION =======
	system("cls");
	printf("\nTEST Q2 (03 marks):\n");
	long s;
	int n,x;
	do{
	   printf("Enter x = ");
	   scanf("%d",&x);
	   printf("Enter n (n>2)= ");
	   scanf("%d",&n);
	}while(x<= 0 || n<=2);
	printf("\nOUTPUT:\n");
    s = sum(x,n);
	printf("%ld\n",s);
	printf("\n");
	system ("pause");
	return(0);
} //================================================
