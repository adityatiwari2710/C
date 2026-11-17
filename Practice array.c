#include<stdio.h>
// int main(){
// int a[5]={10,20,30,40,50};
//      for(int i=0;i<5;i++){
//     printf("%d ",a[i]);
//      }
//     return 0;
// }
// int main(){
//   int a[10];
//   for(int i=0;i<10;i++){
//     a[i]=i+1;}
//     for(int i=0;i<10;i++){
//     printf("%d ",a[i]);
//   }
//   return 0;
// }

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=(i+1)*2;
    }
        for(int i=0;i<10;i++){
            printf("%d %c %d %c %d\n",2,'*',i,'=',a[i]);
        }
        return 0;
    }

      
