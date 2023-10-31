#include<stdio.h>
# define size 5
int queue[size];
int front=-1;
int rear =-1;
void main()
{
     for(;;)
    {
    printf("\n1.Enqueue\n2.Dequeue\n3.Exit\n");
    printf("\n");
    printf("Enter the option :");
    int opt;
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:enqueue();
        break;
    case 2:dequeue();
        break;
    case 3:exit(0);
    default:
        break;
    }
}
}
void enqueue()
{
    int data;
    printf("Enter the data :");
    scanf("%d",&data);
    if(rear == size-1){
        printf("It is Full");
    }
    else
        {
        if (front == - 1)
        front = 0;
        rear++;
        queue[rear] = data;

    }
}
void dequeue(){
    if(front==-1 && rear==-1)
        {
        printf("UNDERFLOW");
    }
else{
    printf("Deleted element:%d",queue[front]);
    front++;
}
}
