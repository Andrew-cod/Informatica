#include <stdio.h>
#include<conio.h>

int main(){
    int t[100][100],n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)scanf("%d",&t[i][j]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)printf("%d ",t[i][j]);
    printf("\n");
    }

    return 0;
}