#include <stdio.h>
#include <stdlib.h>

void calculate(int n){
	int i; 
	double result;
	//Begin your codes here
	result = 1.0;
    for(i = 1; i <= n; i++){
        result *= (1.0 + 1.0/(i*i));
    }
 	
 	//The output value is formatted in two decimal places
 	
 	printf("%.2f", result);
 	
	//End your codes 
} 
//---------------------------------------------------
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION==========
int main()
{  
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n;
  float result;
  printf("Enter a number = "); scanf("%d",&n); 
  printf("\nOUTPUT:\n");
  calculate(n);
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}

