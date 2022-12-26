#include <stdio.h>
int min(int a,int b){
    return (a<b)?a:b;
}
int maxArea(int* t, int n){
    int local=0,global=0,i=0,j=0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){

            if(min(t[i],t[j])*(j-i)>local)local=min(t[i],t[j])*(j-i);
            //printf("local=%d t[i]=%d t[j]=%d min()=%d j-i=%d\n",local,t[i],t[j],min(t[i],t[j]),j-i);
        }
        //printf("\n\n");
        if(local>global)global=local;
    }
    return global;
}

int main(){
    

    int n, t[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t[i]);
    }
    printf("%d",maxArea(t,n));





    return 0;

}