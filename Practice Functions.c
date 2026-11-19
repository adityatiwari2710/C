#include<stdio.h>
void goodmorning(){
    printf("Good Morning\n");
    }
void goodafternoon(){
    printf("Good Afternoon\n");
}
void goodnight(){
    printf("Good Night\n");
}
int main(){
    goodmorning();
    goodafternoon();
    goodnight();
     goodnight();
    return 0;

}

// area of a square
int a(int x){
    int area = x*x;
    return area;
}
int main(){
    int side,area;
    scanf("%d",&side);
    area = a(side);
    printf("%d",area);
    return 0;

}