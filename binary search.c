// applying binary search to the sorted array
#include<stdio.h>
int main()
{
    int n,search;
    printf("ENTER THE NUMBER OF ELEMENTS IN AN ARRAY: \n");
    scanf("%d",&n);
    int A[n];
    printf("ENTER ANY SORTED ARRAY:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("ENTER THE NUMBER TO BE SEARCHED: \n");
    scanf("%d",&search);
    int lb=0,ub=n,mid;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(A[mid]==search)
        {
            printf("FOUND:\n");
            break;
        }
        else if (search < A[mid])     ub = mid-1;
        else lb=mid + 1;
        if(lb>ub)  printf("NOT FOUND\n");
    }
    return 0;

}
