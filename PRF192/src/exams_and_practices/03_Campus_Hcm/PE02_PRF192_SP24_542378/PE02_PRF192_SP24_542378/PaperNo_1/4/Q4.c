#include <stdio.h>
#include <string.h>
//---------------------------------------
void printEncodedString(char* s){
	//Begin your statements here
    
	printf("%s",s) ;      
	//End your statements
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main() {
	system("cls");
  	printf("\nTEST Q4 (3 marks):\n");
    char s[101];
    printf("Enter the  string (s): ");
    scanf("%100[^\n]",s);   
	printf("OUTPUT:\n");
	printEncodedString(s);   
	printf("\n");
	system("pause");
    return 0;
}
//========================================================================
