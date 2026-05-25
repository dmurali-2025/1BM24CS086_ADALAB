/*#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int parent[MAX];
int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;}
void unionSets(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}
int main() {
    int cost[MAX][MAX];
    int n;
    int mincost = 0;
    int edges = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter the cost adjacency matrix (use 999 for no edge):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
        parent[i] = i;
    printf("\nEdges in the Minimum Spanning Tree:\n");
    while (edges < n - 1) {
        int u = -1, v = -1;
        int min = 999;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (find(i) != find(j) && cost[i][j] < min) {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }
        if (u != -1 && v != -1) {
            unionSets(u, v);
            printf("Edge (%d, %d) with cost %d\n", u, v, min);
            mincost += min;
            edges++;
        } else {
            break;
        }
    }
    if (edges != n - 1) {
        printf("\nNo Minimum Spanning Tree Possible\n");
    } else {
        printf("Minimum cost = %d\n", mincost);
    }

    return 0;
}
*/
