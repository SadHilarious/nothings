#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//FUNTIONS maxOfThree() 
int maxOfThree(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}
int main() {
  system("cls");
  printf("Input:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
	int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    
  
  
  // Fixed Do not edit anything here.
  printf("Output:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  
  printf("%d\n", maxOfThree(a, b, c));
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
