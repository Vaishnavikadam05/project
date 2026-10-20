#include<stdio.h>
#define INF 9999

int main()
{
    int cost[10][10],dist[10],visited[10];
    int n,source,i,j,min,u;

    printf("enter number of vertices:");
    scanf("%d",&n);

    printf("enter cost adjacency matrix:");
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&cost[i][j]);

            if(cost[i][j]==0 && i!=j)
            cost[i][j]=INF;
        }
     }

     printf("enter source vertex(0 to %d):",n-1);
     scanf("%d",&source);
     for(i=0;i<n;i++)
     {
        dist[i]=cost[source][i];
        visited[i]=0;
     }
     dist[source]=0;
     for(i=0;i<n;i++)
     {
        min=INF;
        u=-1;
        for(j=0;j<n;j++)
        {
            if(visited[j]==0 && dist[j]<min)
            {
                min=dist[j];
                u=j;
            }
        }
        if(u==-1)
        break;

        visited[u]=1;
        for(j=0;j<n;j++)
        {
            if(visited[j]==0 && cost[u][j]!=INF && dist[u]+cost[u][j]<dist[j])
            {
                dist[j]=dist[u]+cost[u][j];
            }
        }
     }
     printf("\n shortest distance from vertex%d\n",source);

     for(i=0;i<n;i++)
     {
        if(dist[i]==INF)
        printf("vertex %d=No path\n",i);
    else
     printf("vertex %d=%d\n",i,dist[i]);
     }
     return 0;
}