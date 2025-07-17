#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
/* 21. binToDec : Ham nay dung de chuyen doi so he 2 sang he 10. */
int binToDec(const char *bin) {
    int length = strlen(bin), decimal = 0;
    int i;
    for (i = 0; i < length; i++) {
        if (bin[i] == '1') decimal += pow(2, length - 1 - i);
    }
    return decimal;
}
/* 1.1 nhapChuoi */
void nhapChuoi(char str[], int kichThuoc) {
    fgets(str, kichThuoc, stdin);  // Nhap chuoi
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Loai bo ky tu '\n'
    }
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[100];
  nhapChuoi(s,100);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  
  printf("%d", binToDec(s));
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
