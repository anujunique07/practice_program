#define size 5
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void creation();
void traverse();
void modification();
void insertion();
void delection();

int arr[size],loc=-1;

int main(){
    int ch;
    while(1){
        printf("1.creation\n");
        printf("2.Traverse\n");
        printf("3.modification\n");
        printf("4.insertion\n");
        printf("5.delection\n");
        printf("6.exit\n");
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1: creation();
                   break;
            case 2: traverse();  
                    break;
            case 3: modification();
                    break;
            case 4: insertion();
                    break;
            case 5: delection();
                    break;
            default: exit(0);
    
        }
            }
  }

void creation()
{
    if((loc+1)==size)
    {
        printf("array overflow\n");
        return;
    }
    loc++;
    printf("enter anty data:");
    scanf("%d",&arr[loc]);
    }
void traverse(){
    int i;
    if(loc==-1){
        printf("array is empty\n");
        return;
    }
    printf("all elements are:\n");
    for(i=0;i<=loc;i++){
        printf("%d\t",arr[i]);
    }
}

void modification(){
 int pos,val;
 printf("enter the value and position:");
 scanf("%d%d",&pos,&val);
 if((pos-1)>=0 && (pos-1)<=loc)
 arr[pos-1]=val;
 else
 printf("invalid position");
 return;
 }

void insertion(){
   
   int i,pos, val;
   printf("enter the position & value of insertion:");
   scanf("%d%d",&pos,&val);
   
   if((loc+1)==size){
   printf("array overflow:");
   return;
   }
   if((pos-1)>=0 && (pos-1)<=loc){
    for(i=loc;i>=(pos-1);i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;
    loc++;
   }
   else
   printf("invalid positions");
}


void delection(){
       int i,pos;
       printf("enter the position");
       scanf("%d",&pos);
       
        if((loc+1)==size){
        printf("array overflow\n");
        return;
       }
       if((pos-1)>=0 && (pos-1)<=loc){
        for(i=(pos-1);i<=loc;i++){
            arr[i]=arr[i+1];
            loc--;
        }
       }
        else

    printf("invalid position");
}
