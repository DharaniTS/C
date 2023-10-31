#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
}*root=NULL;
void create(int num)
{
    struct node*newnode=(struct node *)malloc (sizeof(struct node));
    newnode->left=NULL;
    newnode->data=num;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
    }
    else
    {
        struct node *temp=root;
        struct node *temp1=root;
        int flag=0;
        while(1)
        {
            if(temp->left==NULL)
            {
                temp->left=newnode;
                break;
            }
            else if(temp->right=NULL)
            {
                temp->right=newnode;
                break;
            }
            else if(flag==0)
            {
                temp=temp1->left;
                flag=1;
            }
            else
            {
                temp=temp1->right;
                flag=0;
                temp1=temp1->left;
            }
        }
    }
}
int main()
 {
int num;
do
{

    scanf("%d",&num);
    if(num>0)
    create(num);
}while(num>0);
 }
