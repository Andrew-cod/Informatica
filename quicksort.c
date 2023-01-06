#include <stdio.h>

void swap(int *a,int *b){
    int  aux;
    aux=*b;
    *b=*a;
    *a=aux;
}

int partition(int *t,int l,int r){
    int pivot = t[r];

    int i=l-1;
    int j=l;
    for(j=l;j<r;j++){
        if(t[j]<pivot){
            i++;
            swap(&t[i],&t[j]);
        }
    }
    swap(&t[i+1],&t[r]);
    return i+1;

}

void qs(int *t,int l,int r){
    if(l<r){
        int p=partition(t,l,r);
        qs(t,l,p-1);
        qs(t,p+1,r);
    }
}

int main(){
int n;
scanf("%d",&n);
int t[n];
for(int i=0;i<n;i++){
    scanf("%d",&t[i]);
}
qs(t,0,n-1);
for(int i=0;i<n;i++){
    printf("%d ",t[i]);
}


}