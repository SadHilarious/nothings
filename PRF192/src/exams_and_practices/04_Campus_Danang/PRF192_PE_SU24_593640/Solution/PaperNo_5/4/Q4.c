#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Ve tam giac can voi so
//    1
//   121
//  12321
// 1234321
//123454321
void veTamGiacCanSo(int n) {
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) 
            printf("  ");
        for (j = 1; j <= 2 * i - 1; j++) 
            printf("%d ", j);
        printf("\n");
    }
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
  scanf("%d", &n);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  veTamGiacCanSo(n);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
