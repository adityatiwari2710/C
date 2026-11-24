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

// Write a C program to print the given number is even or not in the array user defined
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){ 
    sum=sum+a[i];

    }
    printf("%d",sum);
    return 0;
}

write a c program to print the even number in the given array
int main(){
        int n,i,rem,num;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){ 
    rem = a[i]%2;
    num = a[i];
    if(rem ==0)
    printf("%d ",num);
    }

    return 0;
}

// write a c program to eliminate a given element whose position given by user in the array
int main(){
    int a[]={10,20,30,40,50,60};
    int s = sizeof(a)/sizeof(a[0]);
    int pos,i;
    scanf("%d",&pos);
    if(pos <1||pos >6){
        for(i =0;i<s;i++){
            printf("%d ",a[i]);
        }
    }
    else{
    int index = pos -1;
    for(i = index;i < s;i++){
        a[i]=a[i+1];
    }
    s = s-1;
    for(i =0;i<s;i++){
        printf("%d ",a[i]);
    }
}
    
    return 0;

}

// write a c program to insert a given element whose position and value is given by the user
int main(){
    int a[7]={10,20,30,50,60};
    int s=5;
    int pos ,n,index,i;
    printf("Enter the Position to insert ");
    scanf("%d",&pos);
    printf("Enter the number ");
    scanf("%d",&n);
    index = pos -1;
    s = s+1;
    for( i = s-1;i>=index;i--){
        a[i]=a[i-1];
    }
    a[index]=n;
    for(i = 0; i <s; i++){
        printf("%d ",a[i]);

    }
    return 0;
}

// write a c program to identify the element position whose value is given by a user in the given array
int main(){
    int a[5]={10,20,30,40,50};
    int val ,flag = -1,i;
    printf("Enter the Number ");
    scanf("%d",&val);
    for(i=0;i<5;i++){
        if(a[i]==val)
        flag = i;

    }
        printf("%d",flag +1);
    
    return 0;
}