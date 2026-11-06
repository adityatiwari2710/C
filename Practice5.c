// Write a program to check palindrome number or not
#include<stdio.h>
int main(){
    int num,rem,sum=0;
    scanf("%d",&num);
    int x = num;
    while(num!=0){
        rem = num%10;
        sum = sum*10 + rem ;
        num = num / 10;
    }
    if(x==sum)
    printf("Palindrome Number");
    else
    printf("Not a Palindrome");
    return 0;


}