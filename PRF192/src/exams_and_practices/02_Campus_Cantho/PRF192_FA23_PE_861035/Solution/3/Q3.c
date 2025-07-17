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
	char s[205];
	fgets(s, sizeof s, stdin);
    int len = (int)strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[--len] = '\0';
    }

    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSym = 0;
    for (int i = 0; i < len; i++) {
        unsigned char c = s[i];
        if      (isupper(c)) hasUpper = 1;
        else if (islower(c)) hasLower = 1;
        else if (isdigit(c)) hasDigit = 1;
        else                 hasSym   = 1;
    }


    //OUTPUT - @STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

	if (len >= 12 && hasUpper && hasLower && hasDigit && hasSym)
        printf("good job");
    else
        printf("retype");

//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    closeFile(fi);
    closeFile(fo);
    return(0);
}
//--END FIXED PART----------------------------
