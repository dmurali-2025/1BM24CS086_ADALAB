/*#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main() {
    int n, adj[MAX][MAX];
    int indegree[MAX] = {0};
    int queue[MAX], front = 0, rear = -1;
    int topo[MAX], count = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(adj[i][j] == 1) {
                indegree[j]++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(indegree[i] == 0) {
            queue[++rear] = i;
        }
    }
    while(front <= rear) {
        int v = queue[front++];
        topo[count++] = v;

        for(int i = 0; i < n; i++) {
            if(adj[v][i] == 1) {
                indegree[i]--;
                if(indegree[i] == 0) {
                    queue[++rear] = i;
                }
            }
        }
    }
    if(count != n) {
        printf("Graph has a cycle. Topological ordering not possible.\n");
    } else {
        printf("Topological Ordering:\n");
        for(int i = 0; i < n; i++) {
            printf("%d ", topo[i]);
        }
    }
    return 0;
}
*/
