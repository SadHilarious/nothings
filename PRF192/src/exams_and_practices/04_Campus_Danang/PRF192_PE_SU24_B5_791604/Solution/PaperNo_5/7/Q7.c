#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int uniq[100], cnt[100], m = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 != 0) continue;
        // tìm xem đã có trong uniq chưa
        int j;
        for (j = 0; j < m; j++)
            if (uniq[j] == a[i]) {
                cnt[j]++;
                break;
            }
        if (j == m) {
            uniq[m] = a[i];
            cnt[m] = 1;
            m++;
        }
    }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  for (int i = 0; i < m; i++)
        printf("%d-%d\n", cnt[i], uniq[i]);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
