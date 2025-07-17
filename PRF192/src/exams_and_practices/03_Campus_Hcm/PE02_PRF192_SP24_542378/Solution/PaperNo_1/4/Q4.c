#include <stdio.h>
#include <string.h>
//---------------------------------------
void printEncodedString(char* s){
	//Begin your statements here
    for(int i = 0; s[i] != '\0'; i++){
        char c = s[i];
        if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U' ||
            c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
            s[i] = c + 1;
        }
    }
    printf("%s", s);      
	//End your statements
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
int main() {
	system("cls");
  	printf("\nTEST Q4 (3 marks):\n");
    char s[101];
    printf("Enter the  string (s): ");
    scanf("%100[^\n]",s);   
	printf("OUTPUT:\n");
	printEncodedString(s);   
	printf("\n");
	system("pause");
    return 0;
}
//========================================================================
