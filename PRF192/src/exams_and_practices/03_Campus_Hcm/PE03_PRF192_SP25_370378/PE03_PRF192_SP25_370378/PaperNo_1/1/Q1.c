#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//------------------------------------------
int checkTriangle(int a, int b, int c); 
double calMedianA(int a, int b, int c); // calculate median A
//------------------------------------------
//check a,b and c whether are the three sides of a triangle or not
//if true then return 1, otherwise return 0
int checkTriangle(int a, int b, int c){
	int result = 0;
	result = (a < b+c) && (b < a+c) && (c < a+b);
	return result;
}
//------------------------------------------
double calMedianA(int a, int b, int c){
	double medianA = 0;
	//Write your statements here

    //Invoke checkTriangle function to get the result
    
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
  result = calMedianA(a,b,c); 
  printf("\nOUTPUT:\n");
  printf("%.2lf",result);
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}

