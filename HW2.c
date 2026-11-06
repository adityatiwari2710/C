//Write a program to check if a given number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
  int main(){
    int num,rem,sum = 0;
    scanf("%d",&num);
    int x = num;
    while(num != 0){
    rem = num%10;
    sum = sum + pow(rem,3);
    num = num/10;;
    }
    if(x == sum)
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");
    return 0;
 }


