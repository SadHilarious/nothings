#include <stdio.h>
#include <stdlib.h>

void convertToFahrenheit(float c)
{
	// Write your statements here
	//The output result is formatted in two decimal places
	float f = c * 9.0f / 5.0f + 32.0f;
    printf("%.2f", f);
    // End your statements  
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main()
{
	system("cls");
	printf("\nTEST Q1 (2 marks):\n");
	float celsius;
	printf("Enter the temperature in Celsius: ");
	scanf("%f", &celsius);	
	printf("\nOUTPUT:\n");
	convertToFahrenheit(celsius);
	printf("\n");
	system ("pause");
	return 0;
}
//=================================================================================
