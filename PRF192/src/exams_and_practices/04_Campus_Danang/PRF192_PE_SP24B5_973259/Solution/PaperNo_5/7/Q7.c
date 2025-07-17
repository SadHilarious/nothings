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

/* 1.2 Xuat mang 1 chieu. */
void XuatMangLe(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
    	if(arr[i] % 2 != 0) 
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* 1.2 Xuat mang 1 chieu. */
void XuatMangChan(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
    	if(arr[i] % 2 == 0) 
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
  scanf("%d", &n);
  int a[n];
  NhapMang(a,n);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  XuatMangChan(a,n);
  XuatMangLe(a,n);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
