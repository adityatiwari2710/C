// Write a program to check if a student passed or failed.
// marks > 30 is PASS,marks <= 30 is FAIL
#include<stdio.h>
 int main(){
    int a;
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

// Will this code give error or print 1 or not

int x = 2;
if (x=1) {
    printf("x is equal to 1");
    } else {
        printf("x is not equal to 1");
    }
    return 0;
}

// since here for if x = 1 ; here 1 means true that is if there is any number rather than 0 than it will print the if function value while if it will be 0 it will print the else function value that is not equal to one.
// also after defining the value of x = 1,2,3,4 or any number regardless 0 then if we will print the value of x after the if condition then it will corresspond to that value of x which we have assigned it in the if condiition.

//Write a Program to find if a character entered by user is upper case or not

char ch;
scanf("%c",&ch);
if(ch >= 'A'&& ch <= 'Z')
   printf("The given alphabet is of upper case\n");
   else if( ch >='a'&& ch <='z')
   printf("the given alphabet is of lower case\n");
   else 
   printf("Not a english");
 }