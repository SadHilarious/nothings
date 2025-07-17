#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/* 
7.7 demChuHoa : Ham nay dung de dem so luong cac chu cai hoa trong chuoi.
*/
int demChuHoa(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            count++;  // Tang dem khi gap ky tu in hoa
        }
        i++;
    }
    return count;  // Tra ve so luong chu cai hoa trong chuoi
}

/* 
7.8 demChuThuong : Ham nay dung de dem so luong cac chu cai thuong trong chuoi.
*/
int demChuThuong(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;  // Tang dem khi gap ky tu in thuong
        }
        i++;
    }
    return count;  // Tra ve so luong chu cai thuong trong chuoi
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
  
  printf("Upper: %d\n", demChuHoa(s));
    printf("Lower: %d\n", demChuThuong(s));
    printf("Special: %d", strlen(s) - demChuHoa(s) - demChuThuong(s));
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
