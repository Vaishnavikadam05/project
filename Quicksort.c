#include<stdio.h>

void quicksort(int a[], int low,int high);
int partition(int a[],int low,int high);

int main()
{
    int a[100],n,i;
    printf("enter no of elements:");
    scanf("%d",&n);

    printf("enter array elements:");
    {
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

       
        quicksort(a,0,n-1);

        printf("sorted array");
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}


int partition(int a[],int low,int high)
{
    int pivot,i,j,temp;
  
     pivot=a[high];
     i=low-1;
     
     for(j=low;j<high;j++)
     {
     	if(a[j]<pivot)
     	{
     		i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }
     temp=a[i+1];
     a[i+1]=a[high];
     a[high]=temp;
     
     return i+1;
 }
 
 
 void quicksort(int a[],int low,int high)
{
    int p;
    if(low<high)
    {
        p=partition(a,low,high);

        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
    }
}
 