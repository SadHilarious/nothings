#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
/* 1.1 nhapChuoi */
void nhapChuoi(char str[], int kichThuoc) {
    fgets(str, kichThuoc, stdin);  // Nhap chuoi
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Loai bo ky tu '\n'
    }
}
/* 6.1 chuyenDoiChuHoa */
void chuyenDoiChuHoa(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 'a' - 'A';  // Chuyen ki tu thanh chu hoa
        }
    }
}
/* 
7.3 demChuoiCon : Ham nay dung de dem so lan xuat hien cua chuoi con trong chuoi lon.
*/
int demChuoiCon(const char *str, const char *chuoiCon) {
    int count = 0;
    int i = 0;
    int lenStr = strlen(str);
    int lenCon = strlen(chuoiCon);
    while (i <= lenStr - lenCon) {
        if (strncmp(&str[i], chuoiCon, lenCon) == 0) {
            count++;  // Tang dem khi gap chuoi con
        }
        i++;
    }
    return count;  // Tra ve so lan chuoi con xuat hien trong chuoi lon
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  char s[100];
  nhapChuoi(s,100);
  char sub[100];
  nhapChuoi(sub,100);
  chuyenDoiChuHoa(s);
  chuyenDoiChuHoa(sub);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("%d", demChuoiCon(s,sub));
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
