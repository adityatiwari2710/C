// write a c program using functions taking input of 2 numbers and returning there sum
#include<stdio.h>
int sum(int x,int y);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int s = sum(a,b);
    printf("%d",s);
    return 0;
}
int sum(int x, int y){
    return x+y;
}

// write a c program using functions taking n as input and print its table
void print_table(int n){   // ()the variable stored inside this is termed as parameter or formal parameter
        printf("%d\n",n*i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    print_table(n); // () the variable stored inside this is termed as arguement or actual parameter 
    return 0;
     
}

// write a c progeam to convert decimal number to binary number
#include<math.h>
int main(){
    int n,i=0,rem,sum=0;
    scanf("%d",&n);
    while(n!=0){
        rem= n%2;
        sum = sum + rem*pow(10,i);
        i = i + 1;
        n = n/2;
    }
    printf("%d",sum);
    return 0;

}

// write a c program to convert binary into decimal
int main(){
    int n,sum=0,rem,i=0;
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        sum = sum + rem*pow(2,i);
        i=i+1;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}


