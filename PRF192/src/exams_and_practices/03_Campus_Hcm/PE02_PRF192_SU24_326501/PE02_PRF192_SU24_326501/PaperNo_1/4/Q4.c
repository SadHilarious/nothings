#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int countLetters(char* s);
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION.=========
int main() {
	system("cls");
	printf("\nTEST Q4 (3 marks):\n");
	char s[21];
	fflush(stdin);
	printf("Please enter a string: ");
	scanf("%20[^\n]", s);
	printf("\nOUTPUT:\n");
	printf("%d",countLetters(s));
	printf("\n");
	system ("pause");
	return 0;
}
//==============================================================================
int countLetters(char* s) {
	//Begin your codes here=====================
	int count = 0;
	
	return count;	
	//End your codes============================
}

