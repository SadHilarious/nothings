#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void inputArray(int a[], int n);
//The function countPrimeNumber used to count prime numbers in array
int countPrimeNumber(int a[], int n,int x, int y); 
//The function checkPrimeNumber used to check whether n is a prime number or not
int checkPrimeNumber(int n); 
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION============
int main(int argc, char *argv[]) {
	system("cls");
	printf("\nTEST Q3 (2 marks):\n");
	int n, a[MAX], x,y;
	char c;
	do {
		printf("Enter number of elements[1..100]:");
		fflush(stdin);
		scanf("%d%c", &n, &c);
	} while(n<1 || n>MAX || c != '\n');
	inputArray(a,n);
	printf("Enter x = ");
	scanf("%d", &x);
	printf("Enter y = ");
	scanf("%d", &y);
	printf("\nOUTPUT:\n");
	int count = countPrimeNumber(a,n,x,y);
	printf("%d", count);
	printf("\n");
	system ("pause");
	return 0;
}
//=== Do not add new or change statements in the function.===
void inputArray(int a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
//----------------------------------------------
int countPrimeNumber(int a[], int n, int x,int y) {
	int count;
	//Begin your codes here=====================
    //Invoke to checkPrimeNumber function to check whether n is a prime number or not
    
    
	//End your codes============================
	return count;
}
//-----------------------------------------
int checkPrimeNumber(int n) {
	//Begin your codes here=====================

	//End your codes============================
}
