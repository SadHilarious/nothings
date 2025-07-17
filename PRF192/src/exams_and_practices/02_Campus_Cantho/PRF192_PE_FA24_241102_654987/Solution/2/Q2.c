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
	int n, i;
    scanf("%d", &n);
    int a[100];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Tìm max1
    int max1 = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max1) max1 = a[i];
    }
	// Đếm số lần xuất hiện của max1
    int countMax = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == max1)
            countMax++;
    }
    
    if (countMax >= 2) {
        printf("%d", max1);
    } else {
        // Tìm max2 (nhỏ hơn max1)
        int found = 0;
        int max2;
        for (i = 0; i < n; i++) {
            if (a[i] < max1) {
                if (!found || a[i] > max2) {
                    max2 = a[i];
                    found = 1;
                }
            }
        }

    if (found)
            printf("%d", max2);
    else
            printf("%d", max1);

	}
    //OUTPUT - @STUDENT: ADD YOUR CODE FOR OUTPUT HERE:



//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    closeFile(fi);
    closeFile(fo);
    return(0);
}
//--END FIXED PART----------------------------
