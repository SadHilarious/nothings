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
	char type;
    int distance;
    scanf("%c %d", &type, &distance);

    double baseFare, distanceFare = 0.0;
    
    // Xác định giá cước cơ bản
    if (type == 'E') {
        baseFare = 3.0;
    } else if (type == 'L') {
        baseFare = 6.0;
    }

    // Tính giá cước dựa trên khoảng cách
    if (distance <= 5) {
        distanceFare = distance * 1.5;
    } else if (distance <= 10) {
        distanceFare = 5 * 1.5 + (distance - 5) * 1.25;
    } else {
        distanceFare = 5 * 1.5 + 5 * 1.25 + (distance - 10) * 1.0;
    }

    


    //OUTPUT - @STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	// Tổng giá cước
    double totalFare = baseFare + distanceFare;
    printf("%.2f\n", totalFare);


//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    closeFile(fi);
    closeFile(fo);
    return(0);
}
//--END FIXED PART----------------------------
