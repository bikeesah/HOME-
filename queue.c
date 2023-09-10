#include<stdio.h>
#include<conio.h>
int queue[5], f=-1, r=-1;
void Front();
void Rear();
void display();
 void main ()
 {
    int ch;
    printf("1. Front \n");
    printf("2. Rear\n");
    printf("3.display\n"); 
    printf("4.EXIT \n"); 
    
    while(1)
    {
        printf(" Enter  any choices\n ");
        scanf("%d",&ch);
        switch(ch)
        {
             case 1:Rear();
             break;
             case 2:Front();
             break;
             case 3:display();
             break;
             
             
             default:printf("Invalid options");
        }
    }

 }
 void Rear()
 {
int data;
if (r ==5-1)
{
    printf("Queue is full");
}
else
{ 
    if(f==-1)
    {
        f =0;
    }
    printf("Insert the element in queue");
    scanf(" %d",&data);
     r =r+1;
    queue[r]=data;

}
 }

 void Front()
 
 {
    if (f ==-1)
    {
        printf("Queue is empty");
    }
    else
    {
       printf("DELETED %d",queue[f]);
       f=f+1;

    }

 }
 void display()
 {
    int i;
    if (f==-1)
       {
        printf("Queue is empty \n");
        }
        else{
            printf("Queue elments ");
             for (i=f; i<=r;i++)
        {
            printf("%d",queue [i]);
        }
       

        }
    
    
    {
     printf("Queue  is Empty");
    }
 }