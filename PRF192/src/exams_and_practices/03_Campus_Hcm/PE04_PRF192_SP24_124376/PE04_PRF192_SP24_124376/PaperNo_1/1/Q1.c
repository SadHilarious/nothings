#include <stdio.h>
#include <stdlib.h>
int findLargestDigit(int n){
	//Write your statements here
	int max = 0;
    while(n > 0) {
        int d = n % 10;
        if (d > max) max = d;
        n /= 10;
    }
    return max;
	//End your statements 
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION============
int main()
{
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int n,max;
  printf("Enter n = "); scanf("%d",&n);  
  printf("\nOUTPUT:\n");
  max = findLargestDigit(n); 
  printf("%d",max); 
  printf("\n");
  system ("pause");
  return(0); 
}
//==================================================================================
