//Write a program to check if a given number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
  int main(){
    int num,sum=0,count=0,rem;
    scanf("%d",&num);
    int x = num;
    int y = num;
    while(y!=0){
    y = y/10;
    count = count+1;  
    }
    while(num!=0){
      rem = num%10;
      sum = sum+ pow(rem,count);
      num = num/10;
    }
    if(x == sum)
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");
    return 0;
  }

  // write a c program to count number of prime number in a range n
  int main(){
    int count=0,total=0;
    for(int num=1;num<=100;num++){
      count = 0;
      for(int i=1;i<=num;i++){
        if(num%i==0){
          count= count+1;
        }
      }
      if(count==2){
      printf("%d ",num);
      total = total +1;
     }
    }
    printf("\ntotal prime number= %d",total);
    return 0;
  }

  // write a c program to check the given number is natural or not
  int main(){
    double num;
    scanf("%lf",&num);
    if(num>=1)
    printf("Natural number");
    else
    printf("Not a natural number");
    return 0;
  }