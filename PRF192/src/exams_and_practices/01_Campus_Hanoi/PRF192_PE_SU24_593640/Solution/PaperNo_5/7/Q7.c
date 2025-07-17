#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Hàm đổi chỗ 2 số thực
void swap(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng giảm dần
void sortDescending(double arr[], int n) {
    int i, j;
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n, i;
    double k;
    printf("Enter n: ");
    scanf("%d", &n);

    double arr[n];
    for(i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    scanf("%lf", &k);

    double filtered[n];
    int count = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] != k) {
            filtered[count++] = arr[i];
        }
    }
  	sortDescending(filtered, count);
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for(i = 0; i < count; i++) {
        printf("%.1lf ", filtered[i]);
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
