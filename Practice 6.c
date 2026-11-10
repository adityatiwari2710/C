// print the sum of first n natural numbers,also print them in reverse .
#include<stdio.h>
// int main(){
//     int n,i,sum =0;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum = sum+i;
//     }
//     printf("sum is%d\n",sum); 
//     for(i=n;i>=1;i--){
//         printf("%d\n",i);

//     }
//     return 0;
// }

//print the table of a number input by the user
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     for(i=1;i<=10;i++){
//         printf("%d\n",i*n);
//     } 
//     return 0; 
// }

// Keep taking numbers as input from the user until the user inputs an odd number
int main(){
    int n;
    do{
    scanf("%d",&n);
    if(n%2==0)
    printf("%d\n",n);
    else
    printf("Stop");
}
return 0;
}