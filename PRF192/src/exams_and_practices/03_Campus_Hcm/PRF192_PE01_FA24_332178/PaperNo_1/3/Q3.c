#include <stdio.h>

//-----------------------------------------------
void InputArray (int a[], int n)
{
	int i;
	for(i=0; i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
//-----------------------------------------------
int getElement(int a[], int n,int m)
{
	//Begin your statements here
	
	return 0;
	//End your statements
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main()
{
  	system("cls");
  	printf("TEST Q3 (2 marks)\n");
  	int n,m,x, a[50];
	do
	{
		printf("Enter number of elements: ");
		scanf("%d",&n);
	}
	while(n<2||n>50);	
    InputArray (a,n);
	printf("Enter m: ");
    scanf("%d",&m);
    printf("OUTPUT:\n");
    x = getElement(a,n,m);
    printf("%d",x);
    printf("\n");
  	system("pause");
  	return 0;
}
//============================================================


