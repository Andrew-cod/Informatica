#include <stdio.h>
#include <stdlib.h>
#define print_tab(t,n) for(int i=0;i<n;i++)printf("%d ",t[i])
void merge(int *t,int l ,int m ,int r){
    int n_left=m-l+1;
    int n_right= r-m;

    int t_left[n_left];
    int t_right[n_right];

    for(int i=0;i<n_left;i++){
        t_left[i]=t[i+l];
    }

    for(int i=0;i<n_right;i++){
        t_right[i]=t[m+1+i];
    }
    int i=0,j=0;
    for(int k=l;k<=r;k++){
        if( t_left[i]<t_right[j] || (i<=m)&&(j>r) ){
            t[k]=t_left[i];
            i++;
        }
        else {
            t[k]=t_right[j];
            j++;
        }
    }
    






}

void mergesort(int *t,int l,int r){
    int m=0;
if(l<r){ 
    m=l+(r-l)/2;

    mergesort(t,l,m);
    mergesort(t,m+1,r);

    merge(t,l,m,r);
}
}

int main(){

    int t[100000];
    int t_length=0;

    scanf("%d",&t_length);
    for(int i=0;i<t_length;i++){
        scanf("%d",&t[i]);
    }


    for(int i=0;i<t_length;i++){
            printf("%d ",t[i]);
    }
printf("\n");
    mergesort(t,0,t_length-1);
    print_tab(t,t_length);






    return 0;
}