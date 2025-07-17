#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int a[], int n);
int countDivisorM(int a[], int n, int m);

//=== Do not add new or change statements in the main function.===
int main() {	
	system("cls");
	printf("\nTEST Q3 (2 marks):\n");
	int n, a[MAX], m;
	do {
		printf("Enter number of elements [1..100]:");	
		scanf("%d", &n);
	} while(n<1 || n>MAX);
	inputArray(a,n);
	printf("Input m:");
	scanf("%d", &m);
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
	printf("%d",countDivisorM(a,n,m));
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
int countDivisorM(int a[], int n, int m) {
	int count = 0;
	//Begin your statements here=====================
	//...
	//End your statements============================
	return count;
}

