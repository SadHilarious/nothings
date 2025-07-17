#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
/* 1.1 Nhap mang 1 chieu. */
void NhapMang(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
/* 24. dayInMonth: Ham nay tra ve so ngay trong mot thang.*/

// Hàm kiểm tra năm nhuận
bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// Hàm trả về số ngày trong tháng của một năm
int daysInMonth(int month, int year) {
    switch (month) {
        case 1:  // Tháng 1
        case 3:  // Tháng 3
        case 5:  // Tháng 5
        case 7:  // Tháng 7
        case 8:  // Tháng 8
        case 10: // Tháng 10
        case 12: // Tháng 12
            return 31;
        case 4:  // Tháng 4
        case 6:  // Tháng 6
        case 9:  // Tháng 9
        case 11: // Tháng 11
            return 30;
        case 2:  // Tháng 2, xét năm nhuận
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1;  // Tháng không hợp lệ
    }
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int Year;
  scanf("%d", &Year);
  int n;
  scanf("%d", &n);
  int a[n];
  NhapMang(a,n);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for (int i = 0; i < n; i++) {
        printf("%d ", daysInMonth(a[i], Year));
    }
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
