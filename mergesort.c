#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int *t,int l,int r){
    if(l<r){
        int m= l+(r-l)/2;
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
    for(int i=0;i<t_length;i++){
        printf("%d ",t[i]);
    }






    return 0;
}