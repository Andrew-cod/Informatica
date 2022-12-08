#include <stdio.h>
#include <stdlib.h>
int max=0;
int citire(int n){
    int x;
    if(n==0){
            scanf("%d",&max);
    }else{
        scanf("%d",&x);
        citire(n-1);
        
        if(max>=x)printf("%d ",x);
    }

}

int main(){
    int u;
    scanf("%d",&u);
    citire(u);



    return 0;
}