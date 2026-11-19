#include<stdio.h>
int main(){
int a[5]={10,20,30,40,50};
     for(int i=0;i<5;i++){
    printf("%d ",a[i]);
     }
    return 0;
}
int main(){
  int a[10];
  for(int i=0;i<10;i++){
    a[i]=i+1;}
    for(int i=0;i<10;i++){
    printf("%d ",a[i]);
  }
  return 0;
}

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

int main(){
    int a[5] = {10,20,30,40};
    int sum = 0;
    for(int i=0;i<5;i++){
    sum = sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
int main(){
    int n,sum =0;
    scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
   for(int i=0;i<n;i++){
    sum = sum+a[i];

  }
  printf("%d",sum);
  return 0;
}
// Write a program to enter price of 3 items & print their final cost with gst.

int main(){
float price[3];
scanf("%f",&price[0]);
scanf("%f",&price[1]);
scanf("%f",&price[2]);
printf("%.2f\n",price[0]+(0.18*price[0]));
printf("%.2f\n",price[1]+(0.18*price[1]));
printf("%.2f\n",price[2]+(0.18*price[2]));
return 0;

}

