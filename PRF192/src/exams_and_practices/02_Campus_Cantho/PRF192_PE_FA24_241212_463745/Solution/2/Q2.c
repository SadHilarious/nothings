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
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

//--FIXED PART - DO NOT EDIT ANY THINGS HERE
int main(int argc, char *argv[]) {
    readFile(argc, argv);
//--END FIXED PART----------------------------
    
    //INPUT  - @STUDENT: ADD YOUR CODE FOR INPUT  HERE:
	int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int maxPrime = 0;
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i]) && arr[i] > maxPrime) {
            maxPrime = arr[i];
        }
    }


    //OUTPUT - @STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

	printf("%d\n", maxPrime);

//--FIXED PART - DO NOT EDIT ANY THINGS HERE
    closeFile(fi);
    closeFile(fo);
    return(0);
}
//--END FIXED PART----------------------------
