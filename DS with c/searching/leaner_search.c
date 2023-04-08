#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 5

void main(){
    int a[size]={10,20,30,40,5};
      int i,n,pos=-1;
     printf("enter the value:");
     scanf("%d",&n);
     for(i=0;i<size;i++){
            if(a[i]==n)
            pos=i;
     }
     if(pos==-1){
        printf("invalid");
     }
     else
       printf("%d found %d position\n",n,(pos+1));
}