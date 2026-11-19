// Case study [Parking Management System]
#include <stdio.h>
// #include<string.h>
// int main(){
//     char ch[100];
//     float n;
//     printf("Vehicle Type:");
//     scanf(" %99[^\n]", ch);
//     printf("Time(in hours:)");
//     scanf("%f",&n);
//     if( strcmp(ch, "Two wheeler")==0 && n<=5){
//         printf("Parking charge=%.2frupees\n",20.00*n);
//         printf("Extra cost = 0 rupees\n");
//         printf("Total cost =%.2frupees",20.00*n);
//     }
//     else if(strcmp(ch,"Two wheeler")==0 && n>5){
//         printf("Parking charge=%.2frupees\n",n*20);
//         printf("Extra cost =%.2frupees\n",(20.00*n)*(20.00/100.00));
//         printf("Total cost =%.2frupees",(n*20.00)+(20.00*n)*(20.00/100.00));
//     }
//     else if(strcmp(ch,"Three wheeler")==0 && n<=5){
//         printf("Parking charge=%.2frupees\n",40*n);
//         printf("Extra cost = 0 rupees\n");
//         printf("Total cost =%.2frupees",40*n);
//     }
//     else if (strcmp(ch,"Three wheeler")==0 && n>5){
//         printf("Parking charge=%.2frupees\n",n*40);
//         printf("Extra cost =%.2frupees\n",(40*n)*(20.00/100.00));
//         printf("Total cost =%.2frupees",(n*40)+(40*n)*(20.00/100.00));
//      }
//      else{
//      printf("Error in writing the Vehicle Type");
//      }
//      return 0;
// }

// // print numbers from 1 to n using recursion.
// void print(int a){
//     if(a==0)
//     return ;
//     print(a-1);
//     printf("%d ",a);
// }
// int main (){
//     int n;
//     scanf("%d",&n);
//     print(n);
//     return 0;
// }

// // Magic number
//  int sum(int a){

//     int n=a,s=0,b,s1=0;
//     while(n!=0){
//     b=n%10;
//     s=s+b;
//     n=n/10;
//     }
//     while(s !=0){
//         b=s%10;
//     s1=s1+b;
//     s=s/10;
//     }
//     if(s1==1)
//         printf("magic number");
//     }
//     else
//     printf("Not a magic number");
//     return 0;

//  }

// int main(){
//     int num,s;
//     scanf("%d",&num);
//     s = sum(num);
// }

// 1
// 22
// 333
// 4444
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
  return 0;
}