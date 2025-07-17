#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void inputArray(int a[], int n);
int findBiggestNumber(int a[], int n);	
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main() {
	system("cls");
  	printf("\nTEST Q3 (2 marks):\n");
	int n, a[MAX];	
	char c;
	do {
		printf("Enter the number of elements:");
		fflush(stdin);
		scanf("%d%c", &n, &c);
	} while(n<1 || n>MAX || c != '\n');	
	inputArray(a,n);	
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
  	printf("%d", findBiggestNumber(a,n));
  	printf("\n");
  	system ("pause");	
	return 0;
}
//====================================================================================
//=== Do not add new or change statements in this function.===
void inputArray(int a[], int n) {	
	int i;
	for(i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
//----------------------------------------------------
int findBiggestNumber(int a[], int n) {
	//Begin your statements here=====================
    int max = 0;
    for(int i = 1; i < n; i++){
        if (a[i] > max) max = a[i];
    }
	return max;
	//End your statements============================
}

