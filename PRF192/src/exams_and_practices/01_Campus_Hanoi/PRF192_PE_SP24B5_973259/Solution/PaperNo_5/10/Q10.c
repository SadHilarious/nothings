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
/* 1. KiemTraSoNguyenTo : Ham nay dung de kiem tra xem 1 so co phai so nguyen to hay khong. */
int KiemTraSoNguyenTo(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d", &n);
  int a[n];
  NhapMang(a,n);
  int sum = 0;
  for(int i = 0; i < n; i++) {
        if(KiemTraSoNguyenTo(a[i])) {
            sum += a[i];
        }
    }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("%d", sum);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
