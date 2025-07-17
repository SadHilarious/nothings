#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Hàm kiểm tra số hoàn hảo
int isPerfect(int num) {
    if (num <= 1) return 0; // Số <= 1 không phải số hoàn hảo

    int sum = 1; // 1 luôn là ước của mọi số > 1
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int countPerfect = 0;
    for (int i = 0; i < n; i++) {
        if (isPerfect(arr[i])) {
            countPerfect++;
        }
    }

    
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  
  if (countPerfect == 0) {
        printf("There is no perfect number among the %d elements of the array\n", n);
    } else {
        printf("%d\n", countPerfect);
    }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
