/*#include <stdio.h>
#define INF 999999
int V;
int minKey(int key[], int mstSet[]) {
    int min = INF, min_index = -1;
    for (int v = 0; v < V; v++) {
        if (mstSet[v] == 0 && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}
int primMST(int graph[50][50]) {
    int parent[50];
    int key[50];
    int mstSet[50];
    int mincost = 0;
    for (int i = 0; i < V; i++) {
        key[i] = INF;
        mstSet[i] = 0;
    }
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = 1;
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++) {
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
        mincost += graph[i][parent[i]];
    }
    return mincost;
}
int main() {
    int graph[50][50];
    printf("Enter number of vertices: ");
    scanf("%d", &V);
    printf("Enter adjacency matrix (use 0 if no edge):\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    int cost = primMST(graph);
    printf("Minimum cost of MST = %d\n", cost);

    return 0;
}
*/
