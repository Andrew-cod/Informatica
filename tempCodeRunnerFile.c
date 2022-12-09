for(int i=0;i<3;i++){
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d ",&p->val);
        p->next=head;
        head=p;
    }