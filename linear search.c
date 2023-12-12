//linear search to find an element in the arrway
#include<stdio.h>
int main()
{
    int A[10]={1,2,3,44,31,9,8,7,6,23};
    int a;
    int i;
    printf("ENTER THE VALUE TO BE SEARCHED: \n");
    scanf("%d",&a);
    for (i=0;i<10;i++)
    {
        if(a==A[i])
        {
             printf("THE VALUE IS FOUND: %d",a);
             break;
        }
    }
    if(i==10) printf("NOT FOUND");
    return 0;
}
