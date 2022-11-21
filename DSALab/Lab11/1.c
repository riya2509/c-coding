#include<stdio.h>
#define V 5

//init matrix to 0
void init (int arr [][V]){
    int i,j;
    for(i=0;i<V;i++)
for(j=0;j<V;j++)
    arr[i][j]=0;
}
    
    void addEdge(int arr[][V],char src,char dest){
        arr[src][dest]=1;
    }
    void printAdjMatrix(int arr[][V])
{
     int i, j;

     for(i = 0; i < V; i++)
     {
         for(j = 0; j < V; j++)
         {
             printf("%d ", arr[i][j]);
         }
         printf("\n");
     }
}
//printing the adjacent matrix
void main()
{
    int adjMatrix[V][V];
    init(adjMatrix);
    addEdge(adjMatrix,'A','B');
    addEdge(adjMatrix,'A','C');
    addEdge(adjMatrix,'A','D');
    addEdge(adjMatrix,'B','E');
    addEdge(adjMatrix,'B','F');
    addEdge(adjMatrix,'C','D');
    addEdge(adjMatrix,'C','E');
    addEdge(adjMatrix,'D','E');
    addEdge(adjMatrix,'D','F');
    addEdge(adjMatrix,'A','B');

    printAdjMatrix(adjMatrix);
}