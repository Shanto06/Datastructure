#include<stdio.h>

#define WHITE 1
#define GRAY 2
#define BLACK 3


int time=1;
int stime[100];
int ftime[100];

int color[100];
int node;
int edge;

int adj[100][100];

void  dfsvisit(int x)
{
    int i;

    color[x]=GRAY;
    stime[x]=time;
    ++time;

    /// some work
    for(i=0;i<node;++i)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==WHITE)
            {
               dfsvisit(i);
            }
        }
    }

    color[x]=BLACK;

    ftime[x]=time;
    ++time;
}

void dfs()
{
    int i;
    for(i=0;i<node;++i)
    {
        color[i]=WHITE;
    }

    /*
    for(i=0;i<node;i++)
    {
        if(color[i]==WHITE)
        {
            dfsvisit(i);
        }
    }
    */

    dfsvisit(2);
}

int main()
{
    int i,node,edge,n1,j,n2;
    printf("Enter the number of node: ");
    scanf("%d",&node);
    printf("Enter the number of edges: ");
    scanf("%d",&edge);

    for(i=0;i<edge;++i)
    {
        scanf("%d %d",&n1,&n2);
        adj[n1][n2]=1;
        ///adj[n2][n1]=1;
    }

    dfs();

    for(i=0;i<node;++i)
    {
        printf("node: %c %d %d \n",(65+i),stime[i],ftime[i]);
    }

    return 0;
}



