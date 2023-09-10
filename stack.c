#include<stdio.h>
#include<conio.h>
int stack[5],top=-1;
void push();
void pop();
void display();
 void main ()
 {
    int ch;
    printf("1. push\n");
    printf("2. pop\n");
    printf("3.display\n"); 
    
    while(1)
    {
        printf(" \nEnter  any CHOICES\n");
        scanf("%d",&ch);
        switch(ch)
        {
             case 1:push();
             break;
             case 2:pop();
             break;
             case 3:display();
             break;
             
             default:printf("Invalid options");
        }
    }

 }
 void push()
 {
int data;
if (top ==5-1)
{
    printf("stack is full");
}
else
{
    printf("push element in stack");
    scanf(" %d",&data);
    top=top+1;
    stack[top]=data;

}
 }

 void pop()
 
 {
    if (top==-1)
    {
        printf("stack is empty");
    }
    else
    {
       printf("pop %d",stack[top]);
       top=top+1;

    }

 }
 void display()
 {
    int i;
    if (top >=0)
    {
        printf("stack elememt \n");
        for (i=top; i>=0;i--)
        {
            printf("%d",stack[i]);

        }
    }
    else
    {
     printf("stack is Empty");
    }
 }