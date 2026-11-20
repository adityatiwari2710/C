#include<stdio.h>
// void goodmorning(){
//     printf("Good Morning\n");
//     }
// void goodafternoon(){
//     printf("Good Afternoon\n");
// }
// void goodnight(){
//     printf("Good Night\n");
// }
// int main(){
//     goodmorning();
//     goodafternoon();
//     goodnight();
//      goodnight();
//     return 0;

// }

// // area of a square
// int a(int x){
//     int area = x*x;
//     return area;
// }
// int main(){
//     int side,area;
//     scanf("%d",&side);
//     area = a(side);
//     printf("%d",area);
//     return 0;

// }

//Write a program using function to find average of three numbers.
// int avg(int a, int b,int c){
//     int av=(a+b+c)/3;
//     return av;
// }
// int main(){
//     int x,y,z;
//     int average ;
//     scanf("%d%d%d",&x,&y,&z);
//     average = avg(x,y,z);
//     printf("%d",average);
//     return 0;


// }

//Write a function to convert Celsius temperature into Fahrenheit.
void temp(int t){
    float F =(9/5)*t+32;
    printf("%.2f",F);

}
int main(){
    float t;
    scanf("%f",&t);
    temp(t);
    return 0;

}