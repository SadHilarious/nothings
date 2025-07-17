#include <stdio.h>
#include <math.h>
//--------------------------------
int calculate(int n)
 {
 	int result = 1;
 	//Write your statements here
    while(n > 0) {
        int d = n % 10;
        if (d != 0) result *= d;
        n /= 10;
    }
    //End your statements 
    return result;
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main() {
 
 	system("cls");
 	printf("\nTEST Q2 (3 marks):\n");
    int n,result;
    printf("Enter n= ");
    scanf("%d", &n);  
	printf("\nOUTPUT:\n");
	result=calculate(n);
    printf("%d",result);
    printf("\n");
    system ("pause");
  	return(0);  
}
//============================================================ 





