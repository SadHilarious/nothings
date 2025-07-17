#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
    scanf("%d", &n);
    


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
  
	long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0)      printf("%lld", a);
        else if (i == 1) printf(" %lld", b);
        else {
            long long c = a + b;
            printf(" %lld", c);
            a = b;
            b = c;
        }
    }

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
