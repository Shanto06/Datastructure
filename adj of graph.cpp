#include<stdio.h>
#include<istream>
using namespace std;

int adj[100][100];

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
        adj[n2][n1]=1;
    }

    printf("the graph of adjacency Matrix:\n");
    for(i=0;i<node;i++)
    {
        for(j=0;j<node;j++)
        {
            printf("%d\t",adj[i][j]);
        }
        printf("\n");
    }


    return 0;
}

