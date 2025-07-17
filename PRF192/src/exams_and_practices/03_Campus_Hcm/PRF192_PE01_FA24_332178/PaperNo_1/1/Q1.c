#include<stdio.h>
//---------------------------------------------------------------------
void calculateIncome(int workingDays,double dailySalary)
{	
	//Begin your statements here
	//The output value is formatted in two decimal places
	//End your statements
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(){
	
 	system("cls");
 	int workingDays;
	double dailySalary;
 	printf("\nTEST Q1 (2 marks):\n");
 	printf("Enter working days: ");
 	scanf("%d",&workingDays);
 	printf("Enter daily salary: ");
 	scanf("%lf",&dailySalary);
 	printf("\nOUTPUT:\n");
 	calculateIncome(workingDays,dailySalary); 
 	system ("pause");
  	return(0); 	
}
//===========================================================================

