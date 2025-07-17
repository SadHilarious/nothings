#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  char s[101], t[101];
    int i, j = 0;
    fgets(s, sizeof(s), stdin);
    if (s[0]=='\n') fgets(s, sizeof(s), stdin);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i = 0; s[i]; i++) {
        if (isalpha((unsigned char)s[i]))
            t[j++] = s[i];
        else if (s[i] == ' ') {
            if (j > 0 && t[j-1] != ' ')
                t[j++] = ' ';
        }
    }
    if (j > 0 && t[j-1] == ' ')
        j--;
    t[j] = '\0';
  printf("%s\n", t);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
