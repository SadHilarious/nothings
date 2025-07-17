#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);
int checkOctalNumber(char* s);
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main() {
	system("cls");
	printf("\nTEST Q4 (3 marks):\n");
	char s[21];
	fflush(stdin);
	printf("Please enter a string: ");
	scanf("%20[^\n]", s);
	trim(s);
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
	printf("%d",checkOctalNumber(s));
	printf("\n");
	system ("pause");
	return 0;
}
//====================================================================================
int checkOctalNumber(char* s) {
	int result = 0;
	//Begin your statements here=====================
    
	
	//End your statements============================
	return result;
}
//=== Do not add new or change statements in the bellow functions.===
char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}

char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}

char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}
//====================================================================
