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
  int a[n], seen[1000] = {0};
  NhapMang(a,n);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0 && !seen[a[i]]) {
            int c = 0;
            for (int j = 0; j < n; j++)
                if (a[j] == a[i]) c++;
            if (c > 1) {
                printf("%d\n", a[i]);
                seen[a[i]] = 1;
            }
        }
    }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
