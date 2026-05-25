/*#include <stdio.h>
#define l -1
#define r 1

void printPerm(int perm[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", perm[i]);
    printf("\n");
}
int getMobile(int perm[], int dir[], int n)
{
    int mobile = 0;
    for(int i = 0; i < n; i++)
    {
        if(dir[perm[i]-1] == l && i != 0)
        {
            if(perm[i] > perm[i-1] && perm[i] > mobile)
                mobile = perm[i];
        }

        if(dir[perm[i]-1] == r && i != n-1)
        {
            if(perm[i] > perm[i+1] && perm[i] > mobile)
                mobile = perm[i];
        }
    }
    return mobile;
}
int search(int perm[], int n, int mobile)
{
    for(int i = 0; i < n; i++)
        if(perm[i] == mobile)
            return i;
}
void johnsonTrotter(int n)
{
    int perm[n], dir[n];
    for(int i = 0; i < n; i++)
    {
        perm[i] = i + 1;
        dir[i] = l;
    }
    printPerm(perm, n);
    while(1)
    {
        int mobile = getMobile(perm, dir, n);
        if(mobile == 0)
            break;
        int pos = search(perm, n, mobile);
        if(dir[mobile-1] == l)
        {
            int temp = perm[pos];
            perm[pos] = perm[pos-1];
            perm[pos-1] = temp;
        }
        else
        {
            int temp = perm[pos];
            perm[pos] = perm[pos+1];
            perm[pos+1] = temp;
        }
        for(int i = 0; i < n; i++)
        {
            if(perm[i] > mobile)
                dir[perm[i]-1] = -dir[perm[i]-1];
        }
        printPerm(perm, n);
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    johnsonTrotter(n);
    return 0;
}
*/
