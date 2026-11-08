// Write a program to check palindrome number or not
#include<stdio.h>
int main(){
    int num,rem,sum=0;
    scanf("%d",&num);
    int x = num;
    while(num!=0){
        rem = num%10;
        sum = sum*10 + rem;
        num = num / 10;
    }
    if(x==sum)
    printf("Palindrome Number");
    else
    printf("Not a Palindrome");
    return 0;


// Write a program to check whether the number is prime or not
      int main(){
      int num,i,count = 0;
      scanf("%d",&num);
      for(i=2;i<num;i++){
        if(num%i==0)
        count = count +1;
      }
      if(count == 0)
      printf("prime number");
      else
      printf("not a prime number");
      return 0;
    }
       
        
