#include <stdio.h>
#include <ctype.h>
#include <string.h>
char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);

//----------------------------------------
int numberWordsBeginA(char* s){		
	//Begin your statements here
	int i,count=0;
int len = strlen(s);
	

	if (len > 0 && (s[0] == 'a' || s[0] == 'A')) {
		count++;
	}
	

	for (i = 1; i < len; i++) {

		if (s[i-1] == ' ' && (s[i] == 'a' || s[i] == 'A')) {
			count++;
		}
	}
	

	if (count == 0) {
		return len;
	}
	return count; 	 
	//End your statements	
}
 //===============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION===========
int main() {
 
  char s[50];
  int result;  
  system("cls");
  printf("\nTEST Q4 (3 marks):\n");
  printf("\nPlease enter a string:");
  scanf("%50[^\n]",s); 
  trim(s);
  //=====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE=====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM== 
  printf("\nOUTPUT:\n");
  result = numberWordsBeginA(s);	  
  printf("%d",result); 
  printf("\n");
  system ("pause");
  return(0);
}
//=== Do not add new or change statements in this function.===
char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
//=== Do not add new or change statements in this function.===
char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}
//=== Do not add new or change statements in this function.===
char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}
