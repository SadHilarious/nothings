#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  void swap(int *a, int *b){ 
//@STUDENT: ADD YOUR CODE FOR FUNCTION SWAP HERE:



//--FIXED PART - DO NOT EDIT ANY THINGS HERE
 }
int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int x, y;
    scanf("%d%d", &x, &y);
    long sum = 0;
    



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

for (int i = x; i <= y; i++)
        if (i % 2 != 0) sum += i;
    printf("%ld", sum);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
