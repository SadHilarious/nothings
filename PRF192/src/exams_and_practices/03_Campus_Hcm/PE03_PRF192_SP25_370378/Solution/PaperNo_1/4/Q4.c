#include <stdio.h>
#include <string.h>

//-----------------------------------------------
double average(char *str)
{
	//Begin your statements here
   	int sum = 0, count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        sum += (unsigned char)str[i];
        count++;
    }
    if (count > 0)
        return sum / (double)count;
    else
        return 0.0;
	//End your statements
}

//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main()
{
  	system("cls");
  	printf("TEST Q4 (3 marks)\n");
  	char s[31];
  	double avg;
    printf("Enter string:");
    scanf("%30[^\n]",s);
    printf("OUTPUT:\n");
    avg = average(s);
    printf("%.2lf\n", avg);
    printf("\n");
  	system("pause");
  	return 0;
  	//============================================================
}

