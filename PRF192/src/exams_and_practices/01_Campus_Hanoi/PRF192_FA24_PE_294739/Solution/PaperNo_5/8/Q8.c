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
void XuatMang(int arr[], int n, int  k) {
    int i;
    for (i = 0; i < n; i++) {
    	if(KiemTraSoNguyenTo(arr[i]))
        	printf("%.0lf ", pow(arr[i], k));
        else
        	printf("%d ", arr[i]);
    }
    printf("\n");
}
/* 7. power : Ham nay dung de tinh luy thua cua 1 so. */
double power(double base, int exponent) {
    double result = 1.0;
    int i;
    
    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }
    
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
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
  int k;
  scanf("%d", &k);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  
  XuatMang(a,n,k);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
