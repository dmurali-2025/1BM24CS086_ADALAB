/*#include <stdio.h>
int n;
int x[20];
void nqueens(int n) {
    int k = 1;
    x[k] = 0;
    while (k > 0) {
        x[k] = x[k] + 1;
        if (x[k] <= n) {
            int ok = 1;
            for (int j = 1; j < k; j++) {
                if (x[j] == x[k] || (j - k) == (x[j] - x[k]) || (j - k) == (x[k] - x[j])) {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                if (k == n) {
                    for (int i = 1; i <= n; i++) {
                        printf("%d ", x[i]);
                    }
                    printf("\n");
                } else {
                    k++;
                    x[k] = 0;
                }
            }
        } else {
            k--;
        }
    }
}
void main() {
    printf("Enter number of queens: ");
    scanf("%d", &n);
    nqueens(n);
}
*/
