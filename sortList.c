#include <stdio.h>
#include <stdlib.h>
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 
struct ListNode* sortList(struct ListNode* head){
    struct ListNode *p=NULL,*temp=NULL,*prev=NULL,*aux=NULL;
    int sortat=1;
    p=head;
    temp=head;
    do{ 
        p=head;
        prev=NULL;
        sortat=1;
        aux=head;
        //printf("da\n");
        while(p->next!=NULL){
                
            
                if(p->val>p->next->val){
                    sortat=0;
                    if(p==head){
                        head=p->next;
                        //aux=head;
                        p->next=p->next->next;
                        head->next=p;

                        prev=p;
                        p=p->next;
                    }else
                    {
                    //printf("da");
                    prev->next=p->next;//indicam peste nodul acutal 
                    p->next=p->next->next;
                    prev->next->next=p;//nodul mai mare arata catre nodul mai mic
                    prev=prev->next;}
                }else{
                    prev=p;
                    p=p->next;
                }

                /*printf("\n");
        temp=head;
        while(temp!=NULL){
            printf("%d ",temp->val);
            temp=temp->next;
        }*/            
        }
        
    }while(sortat==0);
    return aux;
}




int main(){

    struct ListNode *head=NULL,*p=NULL,*prev=NULL;

    for(int i=0;i<10;i++){
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d ",&p->val);
        p->next=head;
        head=p;
    }
    p=head;
    while(head!=NULL){
        printf("%d ",head->val);

        head=head->next;
    }
    printf("\n");
    head=p;
    head=sortList(head);
    //printf("gata");
    while(head!=NULL){
        printf("%d ",head->val);

        head=head->next;
        }

    return 0;
}