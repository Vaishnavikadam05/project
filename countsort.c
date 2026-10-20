#include<stdio.h>
int main()
{
    int A[100],B[100],C[101]={0};
    int n,k=0,i;

    printf("enter no of element");
    scanf("%d",&n);

    printf("enter the array");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);

        if(A[i]>k)
        k=A[i];
    }

    //Initialize C array
    for(i=0;i<=k;i++)
    {
        C[i]=0;
    }
    // count frequency
    for(i=1;i<=n;i++)
    {
        C[A[i]]=C[A[i]]+1;
    }

    //calculate cumulative count
    for(i=1;i<=k;i++)
    {
        C[i]=C[i]+C[i-1];
    }
    //place elements in B array
    for(i=n;i>=1;i--)
    {
        B[C[A[i]]]=A[i];
        C[A[i]]=C[A[i]]-1;
    }
    printf("sorted array");
    for(i=1;i<=n;i++)
    {
        printf("%d",B[i]);
    }
    return 0;

}