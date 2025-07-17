#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int isLeap(int y) {
    return (y%400==0) || (y%4==0 && y%100!=0);
}

int daysInMonth(int y, int m) {
    if (m==2) return isLeap(y)?29:28;
    if (m==4||m==6||m==9||m==11) return 30;
    return 31;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 	int Y, M;
    scanf("%d %d", &Y, &M);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int d = daysInMonth(Y, M);
    printf("In %d, month %d has %d days", Y, M, d);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
