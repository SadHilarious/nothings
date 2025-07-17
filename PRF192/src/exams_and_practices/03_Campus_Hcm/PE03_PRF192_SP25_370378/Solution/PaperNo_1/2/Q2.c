#include <stdio.h>
#include <stdlib.h>

void calculate(int n){
	int i; 
	double result = 1;
	//Begin your codes here
    for(i = 1; i <= n; i++){
        result *= (1.0 + 1.0/(i*(double)i));
    }
 	
 	//The output value is formatted in two decimal places
    printf("%.2f\n", result);
 	
 	
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
  do{
  	printf("Enter a number = "); 
    scanf("%d",&n); 
  }while(n<=0);  
  printf("\nOUTPUT:\n");
  calculate(n);
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}

