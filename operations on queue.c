#include<stdio.h>
#define size 5  //no semi colon needed
int Q[size],F=-1, R=-1;
// F is front and R is rear

//operations on the queue
int isEmpty_Q()
{
    return (F==-1);
}

int isFull_Q()
{
    return (R == size-1);
}
int Front_element()
{
    if(isEmpty_Q())
    {
        printf("the queue is empty\n");
        return -1; //the -1 factor is important because if it is not there then the function will return garbage value
    }
    return Q[F];
}
int rear_element()
{
    if(isEmpty_Q())
        {
        printf("the queue is empty\n");
        return -1; //the -1 factor is important because if it is not there then the function will return garbage value
    }
    return Q[R];
}
void En_Q(val)
{
    if(isFull_Q())
    {
        printf("the queue is full \n");
        return;
    }
    Q[++R]=val;
    if(F==-1)  F=0;
}
void De_Q()
{
    if(isEmpty_Q())
    {
        printf("the queue is empty\n");
        return ;
    }
    F++;
    if(F>R)    F=R=-1;
}
void traversal()
{
    if(isEmpty_Q())
    {
        printf("Queue is empty\n");
        return ;
    }
    printf("The elements of the queue are as follows: ");
    for(int i=F;i<=R;i++)
    {
        printf("%d\t",Q[i]);
    }
    printf("\n");
}

//execution of the main program starts here-----------------
int main()
{
    traversal();
    En_Q(1);
    En_Q(2);
    En_Q(3);
    traversal();
    En_Q(4);
    En_Q(5);
    En_Q(6);
    En_Q(7);
    traversal();
    De_Q();
    De_Q();
    De_Q();
    traversal();
    En_Q(10);
    traversal();
return 0; //return 0 shows the successful execution of the code
}

//Output:
/*Queue is empty
The elements of the queue are as follows: 1     2       3
the queue is full
the queue is full
The elements of the queue are as follows: 1     2       3       4       5
The elements of the queue are as follows: 4     5
the queue is full
The elements of the queue are as follows: 4     5*/


