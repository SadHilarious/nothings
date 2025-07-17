#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
/* 5.10 Thay the chuoi con*/
void thayTheChuoiCon(char *str, const char *oldSubStr, const char *newSubStr) {
    char *pos;
    int oldSubStrLen = strlen(oldSubStr);
    int newSubStrLen = strlen(newSubStr);
    while ((pos = strstr(str, oldSubStr)) != NULL) {  // T�m kiem chuoi con
        // Di chuyen phan c�n lai cua chuoi de tr�nh ghi d� du lieu
        memmove(pos + newSubStrLen, pos + oldSubStrLen, strlen(pos) - oldSubStrLen + 1);
        // Ch�n chuoi moi v�o vi tr� t�m thay
        memcpy(pos, newSubStr, newSubStrLen);
    }
}
/* 1.1 nhapChuoi */
void nhapChuoi(char str[], int kichThuoc) {
    fgets(str, kichThuoc, stdin);  // Nhap chuoi
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Loai bo ky tu '\n'
    }
}

/* 1.2 xuatChuoi */
void xuatChuoi(const char str[]) {
    printf("%s\n", str);  // Xuat chuoi
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
	char s1[1000], s2[100], s3[100];
	

    nhapChuoi(s1,100);
    nhapChuoi(s2,100);
    nhapChuoi(s3,100);
    
  thayTheChuoiCon(s1,s2,s3);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  
  xuatChuoi(s1);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
