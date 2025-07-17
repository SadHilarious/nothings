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
  int N;
  scanf("%d", &N);
  int a[N];
  NhapMang(a,N);
  int K;
  scanf("%d", &K);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
   int found = 0;
    for (int i = 0; i < N; i++) {
        if (K != 0 && a[i] % K == 0) {
            printf("%d\n", a[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Not found in %d elements of array", N);
    }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
