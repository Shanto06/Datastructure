#include<stdio.h>
#include<iostream>

using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3
stack <int> ans;

int color[100];
int node;
int edge,time=1;
int stime[100];
int ftime[100];
int adj[100][100];

void  dfsvisit(int x)
{
    int i;
    stime[x]=time++;

    color[x]=GRAY;

    /// some work
    for(i=0;i<node;i++)
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
    ftime[x]=time++;
    ans.push(x);
}

void dfs()
{
    int i;
    for(i=0;i<node;i++)
    {
        color[i]=WHITE;
    }
    for(i=0;i<node;i++)
    {
        if(color[i]==WHITE)
        {
            dfsvisit(i);
        }
    }
}

int main()
{
    int i,node,edge,n1,j,n2;
    printf("Enter the number of node: ");
    scanf("%d",&node);
    printf("Enter the number of edges: ");
    scanf("%d",&edge);

    for(i=0;i<edge;i++)
    {
        scanf("%d %d",&n1,&n2);
        adj[n1][n2]=1;
        ///adj[n2][n1]=1;
    }

    dfs();
    printf("after the topological sort: ");
    while(!ans.empty())
    {
        cout<<ans.top()<<"";
        ans.pop();
    }
    cout<<endl;


    return 0;
}


