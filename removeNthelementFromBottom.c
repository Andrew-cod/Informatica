#include <stdio.h>
#include <stdlib.h>
struct ListNode {
     int val;
     struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int nr;
    struct ListNode *p=head;
    while(p!=NULL){
        nr++;
        p=p->next;
    }
    if(nr==1)return NULL;
    nr=nr-n;
    p=head;
    struct ListNode *prev=head;
    for(int i=0;i<nr;i++){
        if(i!=0 && prev!=NULL)prev=prev->next;
        if(p!=NULL)
        p=p->next;
        //printf("%d %d\n",prev->val,p->val);
    }
    if(p!=NULL)
    if(p->next==NULL && prev!=NULL)prev->next=NULL;
    else{
    prev->next=p->next;
    }
    //printf("%d %d",prev->val,p->val);
    return head;

}


int main(){
struct ListNode *p=NULL,*head=NULL;
int n;
scanf("%d",&n);
head=(struct ListNode*)malloc(sizeof(struct ListNode));
scanf("%d",&head->val);
head->next=NULL;
for(int i=1;i<n;i++){
    p=(struct ListNode*)malloc(sizeof(struct ListNode));
    scanf("%d",&p->val);
    p->next=head;
    head=p;
}
head=removeNthFromEnd(head,2);
while(head!=NULL){
    printf("%d ",head->val);
    head=head->next;
}






}