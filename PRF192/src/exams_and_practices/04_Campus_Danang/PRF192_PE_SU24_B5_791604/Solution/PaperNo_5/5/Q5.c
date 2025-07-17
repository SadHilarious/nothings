#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
/* 1.1 Nhap mang 1 chieu. */
void NhapMang(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  int a[n];
  NhapMang(a,n);
  int sum = 0;
  
  for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sum += a[i];
        }
    }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
   if (sum != 0) {
        // in tổng các số lẻ
        printf("%d", sum);
    } else {
        // in thông báo khi không có số lẻ
        printf("There are no odd numbers in %d elements", n);
    }
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
