#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head,*newnode,*temp,*prev,*nextnode;
int main()
{
 int option;
 while(1)
 {
     printf("\n 1:create");
     printf("\n 2:display");
     scanf("%d",&option);
     switch(option)
     {
     case 1:
        create();
        break;
     case 2:
        display();
        break;
     default:
        printf("invalid");
        break;
     }
 }
 return 0;
}
void create()
{
    int n,i;
    printf("enter size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter elements\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=temp->next;
    }
    }
}
void display()
{
    temp=head;
    printf("displaying the elements\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

