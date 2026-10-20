#include<stdion.h>
int main()
{
    int a[100],i,j,n,item;

    printf("enter the element");
    scanf("%d",&n);


    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i])
    }
    //ascending order
    for(i=1;i<n;i++)
    {
        item=a[i];
        j=i-1;

        while(item<a[i] && (j>=0))
        {
            a[j+1]=a[i];
            j=j-1;
        }
        a[j+1]=item;
    }
    printf("ascending order");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

  // descending order
    for(i=1;i<n;i++)
    {
    	item=a[i];
    	j=i-1;
    	while(item>a[j] && (j>=0))
    	{
    		a[j+1]=a[j];
    		j=j-1;
    		
		}
		a[j+1]=item;
	}
    printf("desecnding order");
    for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
	}

}

