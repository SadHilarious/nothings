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
/* 6.4 chuyenDoiThanhHoa */
char chuyenDoiThanhHoa(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');  // Chuyen ki tu thanh chu hoa
    }
    return c;  // Tra ve ki tu goc neu khong phai chu thuong
}
/* 1.2 xuatChuoi */
void xuatChuoi(const char str[]) {
    printf("%s\n", str);  // Xuat chuoi
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  char s[100];
  nhapChuoi(s,100);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for (int i = 0; i < strlen(s) ; i++) {
        if (i % 2 == 0)
            s[i] = chuyenDoiThanhHoa(s[i]);
    }
  
  xuatChuoi(s);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
