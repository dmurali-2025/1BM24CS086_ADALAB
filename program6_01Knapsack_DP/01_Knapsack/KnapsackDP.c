/*#include <stdio.h>

int max(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
int KnapsackDP(int n,int M,int W[],int P[]){
    int Table[n+1][M+1];
    for(int i=0;i<=n;i++) Table[i][0]=0;
    for(int j=0;j<=M;j++) Table[0][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=M;j++){
            if(j<W[i-1]){
                Table[i][j]=Table[i-1][j];
            }
            else{
                Table[i][j]=max(Table[i-1][j],P[i-1]+Table[i-1][j-W[i-1]]);
            }
        }
    }
    return Table[n][M];
}

void main(){
    int n,M;
    printf("Enter Knapsack capacity(M) and number of objects(n)");
    scanf("%d%d",&M,&n);
    printf("\nEnter weights and profits:\n");
    int w[n],P[n];
    for(int i=0;i<n;i++){
        scanf("%d%d",&w[i],&P[i]);
    }
    printf("Max Profit:%d\n",KnapsackDP(n,M,w,P));
}
*/
