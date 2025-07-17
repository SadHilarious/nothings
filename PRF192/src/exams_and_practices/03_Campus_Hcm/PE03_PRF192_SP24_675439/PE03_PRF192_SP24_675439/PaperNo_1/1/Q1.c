#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//------------------------------------------
double calMedianA(int a, int b, int c){
	double medianA = 0;
	//Write your statements here 
    //.....
	//End your statements 	
	return medianA;
}
//=============DO NOT ADD NEW OR CHANGE THE STATEMENTS IN THE MAIN FUNCTION========
int main()
{  
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int a,b,c;
  double result;
  do{  
  		printf("Enter a, b and c: "); 
	  	scanf("%d%d%d",&a,&b,&c);   
  }while( (a<=0) || (b<=0) || (c<=0));   
  printf("\nOUTPUT:\n");
  result = calMedianA(a,b,c); 
  printf("%.2lf",result);
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}

