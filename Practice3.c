//Write a program to check if a number is divisible by 2 or not.
#include<stdio.h>
int main(){ int a;
    printf("enter the number");
    scanf("%d",&a);
    printf("%d\n", a % 2 == 0 );

   
// Print 1 (true) or O(false) for following statements :
// 1. if it's sunday & it's snowing -> true
 int itssunday = 1;
 int itssnowing = 1;
  printf("%d\n",itssunday && itssnowing );
  
// 2. if it's monday or it's raining > true
 int itsmonday = 1;
 int itsraining = 0;
  printf("%d\n", itsmonday || itsraining);
  
// 3. if a number is greater than 9 & less than 100 -> true ()
 int b = 43;
 printf("%d", b>9 && b<100);
 return 0;
}