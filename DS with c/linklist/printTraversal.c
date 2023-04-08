#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node {
    int data;
    struct node *next;
};

void traverseinlinklist(struct node *ptr){
    while(ptr != NULL){
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    //allocate memory for nodes is the linklist in head
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    //FIRST AND SECOND NODE LINK:

     head->data=7;
     head->next=second;

    //SECOND AND THIRD NODE LINK:
     
     second->data=55;
     second->next=third;

     //THIRD AND FOURTH NODE LINK:

     third->data=12;
     third->next=fourth;

     //FOURTH NODE:

     fourth->data=3;
     fourth->next=NULL;

    traverseinlinklist(head);

}