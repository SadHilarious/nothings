//--FIXED PART - DO NOT EDIT ANY THINGS HERE--
//--NOT ALLOWED TO DECLARE MORE LIBRARIES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

FILE *fi=NULL, *fo=NULL;

int checkIfFileExists(const char * filename)
{
    FILE *file;
    if (file = fopen(filename, "r"))
    {
        fclose(file);
        return 1;
    }
    return 0;
}

void readFile(int argc, char *argv[]) {
    if (argc == 3) {
        if(checkIfFileExists(argv[1]))
        {
            fi = freopen(argv[1], "r", stdin);
        }
        fo = freopen(argv[2], "w", stdout);
    }
}

void closeFile(FILE *f) {
    if (f != NULL)
        fclose(f);
}
//--END FIXED PART----------------------------

//--VARIABLES - @STUDENT: DECLARE YOUR VARIABLES HERE:


//--FUNCTIONS - @STUDENT: YOUR FUNCTIONS CODE ARE HERE:


//--FIXED PART - DO NOT EDIT ANY THINGS HERE
int main(int argc, char *argv[]) {
    readFile(argc, argv);
//--END FIXED PART----------------------------
    
    //INPUT  - @STUDENT: ADD YOUR CODE FOR INPUT  HERE:

	int N;
    scanf("%d", &N);

    // Chuyển số thành mảng các chữ số
    int temp = N;
    int digits[4]; 
    int len = 0;
    while (temp > 0) {
        digits[len++] = temp % 10;
        temp /= 10;
    }

    // Sắp xếp các chữ số theo thứ tự giảm dần
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (digits[i] < digits[j]) {
                int temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }

    // Tạo số lớn nhất từ các chữ số đã sắp xếp
    int maxNum = 0;
    for (int i = 0; i < len; i++) {
        maxNum = maxNum * 10 + digits[i];
    }

    //OUTPUT - @STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

    printf("%d\n", maxNum);

//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    closeFile(fi);
    closeFile(fo);
    return(0);
}
//--END FIXED PART----------------------------
