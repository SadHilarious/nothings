#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int m, n;
  scanf("%d %d", &m, &n);
  int demchan = 0;
  int demle = 0;
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for(int i = m; i <=n; i++){
  	if(i % 2 == 0){
  		demchan++;
	  }else{
	  	demle++;
	  }
  }
  printf("%d\n%d", demchan, demle);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
