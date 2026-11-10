//break statement
//whenever we write the break statement we write it for exiting the loop

//Continue Statement
// It helps us to skip to the next iteration

// Practice

// print all the number 0 to 10 but skip 6
#include<stdio.h>
// int main(){
    for(int i=0;i<=10;i++){
    if(i==6)
    continue;
    printf("%d\n",i);
    }
    return 0;
}

//print all the odd numbers from 5 to 50
int main(){
    int i;
    for( i=5;i<=50;i++){
        if(i%2==0)
        continue;
        printf("%d\n",i);
    }
    return 0;
}

// print the factorial of number n
int main(){
    int n,i,mul=1;
    scanf("%d",&n);
    for(i=2;i<n;i++){
       mul=mul*i;
    }
   printf("%d",mul*n);
   return 0;
}

 // print the reverse of the table of n
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    printf("%d\n",n*i);
    return 0;
}

// Calculate the sum of all the numbers between 5 and 50
int main(){
    int i,sum=0;
    for(i=5;i<=50;i++){
    sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}