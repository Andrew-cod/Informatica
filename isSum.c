
#include <stdio.h>
#include <stdlib.h>
int issum(int target, int *t, int n,int *rez)
{   
    if(target<0)return 0;
    if (target == 0)return 1;
    if(rez[target]!=0)return rez[target];
    for (int i = 0; i < n; i++)
    {
        rez[target]=issum(target - t[i], t, n,rez);
        if(rez[target]==1)return 1;
    }
    return 0;
}

int main()
{   

    int target, n;
    scanf("%d%d", &target, &n);
    int t[n],*rez;
    rez=(int*)calloc(target,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }

    int r = issum(target, t, n,rez);
    printf("\n%d", r);

    return 0;
}
