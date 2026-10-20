#include<stdio.h>
int main()
{
    int a[100],n,i,min;

    printf("enter number of elements");
    scanf("%d",&n);

    printf("enter array element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("minimum number=%d",min);
    return 0;
    
}

