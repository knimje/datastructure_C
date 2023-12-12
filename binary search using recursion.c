// applying binary search using recurcsion
#include<stdio.h>
int B_search(int *A,int lb,int ub,int value)
{
    if(lb>ub) return 0;
    int mid=(lb+ub)/2;
    if(A[mid]==value)  return 1;
    if(value<A[mid]) return B_search(A,lb,mid-1,value);
    else return B_search(A,mid+1,ub,value);
}
int main()
{
    int A[10]={1,2,3,44,31,9,8,7,6,23};
    int search;
    printf("ENTER THE VALUE TO BE SEARCHED: \n");
    scanf("%d",&search);
    if(B_search(A,0,10,search)) printf("%d is FOUND \n",search);
    return 0;
}
