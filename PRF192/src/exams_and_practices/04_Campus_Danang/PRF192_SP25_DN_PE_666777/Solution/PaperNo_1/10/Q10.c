#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
    int x, y;
} Point;

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  Point p, best;
    // đọc điểm đầu làm “best” khởi tạo
    scanf("%d%d", &best.x, &best.y);
    for (int i = 1; i < 5; i++) {
        scanf("%d%d", &p.x, &p.y);
        if (p.x > best.x) best = p;
    }
    
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  

	printf("Max X: Point(%d,%d)", best.x, best.y);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
