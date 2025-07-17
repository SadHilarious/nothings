#include <stdio.h>
#include <stdlib.h>
//-------------------------------------------------
void printRank(int grade)
{
	//Write your statements here

     if (grade >= 90 && grade <= 100) {
        printf("A\n");
    } else if (grade >= 80 && grade <= 89) {
        printf("B\n");
    } else if (grade >= 70 && grade <= 79) {
        printf("C\n");
    } else if (grade >= 60 && grade <= 69) {
        printf("D\n");
    } else if (grade >= 0 && grade <= 59) {
        printf("E\n");
    }
    //End your statements 
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main()
{ 
  system("cls");
  printf("\nTEST Q1 (2 marks):\n");
  int grade;
  do{
  	 printf("Input a student's grade: ");
     scanf("%d",&grade);
  }while(grade<0 || grade>100);
   printf("OUTPUT:\n");
  printRank(grade);
  system ("pause");
  return(0);  
}
//===================================================================================
