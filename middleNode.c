#include <stdlib.h>
#include <stdio.h>

 struct ListNode {
     int val;
     struct ListNode *next;
 };

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *mid=head;
    int nr=0;
    while(head!=NULL){
        if(nr%2==1)mid=mid->next;
        nr++;
        head=head->next;
    }
    return mid;

}

int main(){
    struct ListNode *head=NULL,*p=NULL;
    //crearea unei liste simplu inaltuite

    for(int i=0;i<2;i++){
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d ",&p->val);
        p->next=head;
        head=p;
    }

    p=head;
    while(p!=NULL){
        printf("%d ",p->val);

        p=p->next;
    }
    printf("\n");
    printf("%d",middleNode(head)->val);





    return 0;
}