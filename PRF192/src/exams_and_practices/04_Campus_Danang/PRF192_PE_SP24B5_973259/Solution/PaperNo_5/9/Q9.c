#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  char s[101];
    char result[101];
    int j = 0;
  
  fgets(s, sizeof(s), stdin);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 0; s[i] != '\0'; i++) {
        // Kiểm tra nếu là chữ cái (a-z hoặc A-Z) hoặc là dấu cách
        if (isalpha(s[i]) || s[i] == ' ') {
            result[j++] = s[i];
        }
    }
	result[j] = '\0';
  
  
  printf("%s", result);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
