#include <stdio.h>
#include <stdlib.h>
//--------------------------
int sum(int n){	    
  int s = 0;
  // Write your statements here
  
  
  // End your codes
  return s;  
}
//====DO NOT ADD NEW OR CHANGE THE STATEMENTS IN THE MAIN FUNCTION
int main()
{ 
  int n,s;
  system("cls");
  printf("\nTEST Q2 (3 marks):\n"); 
  printf("Enter n = "); scanf("%d",&n);   
  printf("\nOUTPUT:\n");
  s = sum(n);
  printf("%d",s); 
  printf("\n");
  system ("pause");
  return(0);
}
