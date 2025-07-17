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
    int times[100]; // Giả sử tối đa 100 đối thủ
    for (int i = 0; i < N; i++) {
        scanf("%d", &times[i]);
    }

    // Sắp xếp mảng theo thứ tự giảm dần để tìm runner-up
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (times[i] < times[j]) {
                int temp = times[i];
                times[i] = times[j];
                times[j] = temp;
            }
        }
    }

    


    //OUTPUT - @STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

	// Runner-up là thời gian thứ 2 (vị trí 1 sau khi sắp xếp giảm dần)
    printf("%d\n", times[1]);

//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    closeFile(fi);
    closeFile(fo);
    return(0);
}
//--END FIXED PART----------------------------
