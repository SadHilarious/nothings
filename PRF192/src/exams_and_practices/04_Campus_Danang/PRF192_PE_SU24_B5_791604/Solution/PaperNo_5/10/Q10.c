#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i*i <= x; i++)
        if (x % i == 0) return 0;
    return 1;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;

    scanf("%d", &n);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  int found = 0;
    for (int i = n - 1; i >= 2 && found < 4; i--) {
        if (isPrime(i)) {
            printf("%d\n", i);
            found++;
        }
    }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
