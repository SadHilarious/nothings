#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int isConsonant(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z') &&
           !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[101];
    // đọc nguyên dòng, sau khi đã đọc số/trôi\n
    fgets(s, sizeof(s), stdin);

    int count = 0;
    int i = 0;
    while (s[i]) {
        // tìm đầu một từ
        while (s[i] && isspace((unsigned char)s[i])) i++;
        if (!s[i]) break;
        // tại i là ký tự đầu từ
        if (isConsonant(s[i]))
            count++;
        // bỏ qua đến hết từ
        while (s[i] && !isspace((unsigned char)s[i])) i++;
    }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("%d", count);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
