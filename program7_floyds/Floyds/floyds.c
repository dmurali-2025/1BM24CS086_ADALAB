/*#include <stdio.h>
#define INF 99
void floyds(int n, int cost[10][10], int A[10][10]) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            A[i][j] = cost[i][j];
        }
    }
    for (k = 1; k <= n; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (A[i][k] + A[k][j] < A[i][j]) {
                    A[i][j] = A[i][k] + A[k][j];
                }
            }
        }
    }
}
void main() {
    int n, i, j;
    int cost[10][10], A[10][10];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter the cost matrix (use 99 for infinity):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }
    floyds(n, cost, A);
    printf("\nShortest path:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (A[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}
*/
