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
/* 6.2 chuyenDoiChuThuong */
void chuyenDoiChuThuong(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';  // Chuyen ki tu thanh chu thuong
        }
    }
}
/* 3.1 saoChepChuoi */
void saoChepChuoi(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;  // Sao chep ky tu tu src sang dest
        dest++;
        src++;
    }
    *dest = '\0';  // Them ky tu ket thuc chuoi
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s1[100];
  nhapChuoi(s1,100);
  char s2[100];
  nhapChuoi(s2,100);
  char s3[100];
  
  saoChepChuoi(s3,s2);
  
  chuyenDoiChuThuong(s1);
  chuyenDoiChuThuong(s2);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  if (demChuoiCon(s1,s2)>0) {
        printf("Product '%s' found %d time(s)", s3, demChuoiCon(s1,s2));
    } else {
        printf("Product '%s' not found", s3);
    }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
