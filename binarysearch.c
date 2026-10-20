#include<stdio.h>
int main()
{
    int a[100],i,j,n,key;
    int mid,low,high;
    printf("enter no of element");
    scanf("%d",&n);

    printf("enetr the sorted array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element search");
    scanf("%d",&key);

    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("element found at position %d",mid+1);
            return 0;

        }
         else if(key>a[mid])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("element not found");
    return 0;

}