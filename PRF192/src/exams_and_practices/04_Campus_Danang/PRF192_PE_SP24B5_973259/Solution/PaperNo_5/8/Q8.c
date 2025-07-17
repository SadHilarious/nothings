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
void XuatMang(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* 3.2 Sap xep giam dan. */
void sortDescending(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
  scanf("%d", &n);
  int a1[n];
  NhapMang(a1,n);
  int m;
  scanf("%d", &m);
  int a2[m];
  NhapMang(a2,m);
  int a3[m+n];
  for (int i = 0; i < n; i++)       a3[i] = a1[i];
  for (int i = 0; i < m; i++)       a3[n + i] = a2[i];
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  sortDescending(a3,m+n);
  XuatMang(a3,m+n);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
