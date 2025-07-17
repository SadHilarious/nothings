#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//------------------------------------------
void printAroundArea(int radius, int height ) {
	//Write your statements here
    double area = 2 * 3.14 * radius * height;
    printf("%.2f", area);
	//End your statements
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main() {
	system("cls");
	printf("\nTEST Q1 (2 marks):\n");
	int r, h;	
	do {
		printf("Enter radius and height of cylinder: ");
		scanf("%d%d",&r, &h);
	} while((r<=0) || (h<=0));	
	printf("\nOUTPUT:\n");
	printAroundArea(r, h);
	printf("\n");
	system ("pause");
	return(0);
}
//============================================================
