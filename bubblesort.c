#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;

    printf("enetr the element");
    scanf("%d",&n);

    printf("enter the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   
    // ascending order
    for(i=0;i<n-1;i++)
    {
         for(j=0;j<n-1-i;j++)
         {
            if(a[j]>a[j+1])
            {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
            }
        }
    }
printf("ascending order");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
}