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

    // Tìm vị trí số lẻ đầu tiên để khởi tạo
    int min_i = -1, max_i = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            min_i = max_i = i;
            break;
        }
    }
    // Nếu không có số lẻ thì chỉ in mảng nguyên
    if (min_i == -1) {
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);
        return 0;
    }
    // Tìm số lẻ nhỏ nhất và lớn nhất (lần xuất hiện đầu)
    for (int i = min_i + 1; i < n; i++) {
        if (a[i] % 2 != 0) {
            if (a[i] < a[min_i]) min_i = i;
            if (a[i] > a[max_i]) max_i = i;
        }
    }
    // Hoán vị
    int tmp = a[min_i];
    a[min_i] = a[max_i];
    a[max_i] = tmp;
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
