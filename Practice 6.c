// print the sum of first n natural numbers,also print them in reverse .
#include<stdio.h>
int main(){
    int n,i,sum =0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("sum is%d\n",sum); 
    for(i=n;i>=1;i--){
        printf("%d\n",i);

    }
    return 0;
}

//print the table of a number input by the user
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d\n",i*n);
    } 
    return 0; 
}

// Keep taking numbers as input from the user until the user inputs an odd number
// int main(){
    int n;
    do{
    scanf("%d",&n);
    if(n % 2 !=0)
    break;
} while(1);
return 0;
}

// Keep taking numbers as input from user until user enters a number which is multiple of 7
int main(){
    int n;
    do{
        scanf("%d",&n);
        if(n%7==0)
        break;
    }while(1);
    printf("Done");
    return 0;

}

// check total number of prime numbers in the range 5 to 50
int main(){
    int i,count=0,totalnumbers = 0,n;
    for(n=5;n<=50;n++){
        count=0;
        for( i=1;i<=n;i++){
        if(n%i==0)
        count = count +1;
        }
        if(count ==2){
        printf("%d\n",n);
        totalnumbers++;
    }
}
    printf("%d",totalnumbers);
    return 0;
}

