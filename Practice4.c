// Write a program to check if a student passed or failed.
// marks > 30 is PASS,marks <= 30 is FAIL
#include<stdio.h>
 int main(){
 /*   int a;
    printf("enter marks:");
    scanf("%d",&a);
    if(a>30){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
        return 0;
 }

 */

//  Write a Program to give grades to a student marks < 30 is C
//  30 >= marks < 70 is B
//  70 >= marks < 90 is A
//  90 >= marks <= 100 is A+

  int a;
  printf("enter marks:");
  scanf("%d",&a);
  if(a<30)
    printf("GRADE C");
    else if(a>=30 && a<70)
    printf("GRADE B");
    else if(a>=70 && a<90)
    printf("GRADE A");
    else 
    printf("GRADE A+");
    return 0;
 }  