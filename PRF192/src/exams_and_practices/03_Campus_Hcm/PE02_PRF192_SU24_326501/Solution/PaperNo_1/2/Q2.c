#include <stdio.h>
#include <stdlib.h>
//------------------------------
int isPrime(int num) {
    // Write your statements here
    int result = 0;
    if(num < 2) {
        return 0;
    }
    for(int i = 2; i <= (int)sqrt(num); i++){
        if(num % i == 0){
            return 0;
        }
    }
    result = 1;
    return result;
    // End your statements  
}
//------------------------------
int sumPrimes(int n){	    
  // Write your statements here
  //Invoke to isPrime function to check whether n is a prime number or not
  int sum = 0;
  for(int i = 2; i < n; i++){
        if(isPrime(i)) sum += i;
    }  
  return sum;
  // End your statements  
}
//====DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION======
int main()
{
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n,s;
  printf("Enter n = "); scanf("%d",&n);   
  printf("\nOUTPUT:\n");
  s = sumPrimes(n);
  printf("%d",s);
  printf("\n");
  system ("pause");
  return(0);
}
//=============================================================
