#include <stdio.h>
#include <stdlib.h>


struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};


int isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p==NULL && q==NULL)return 1;
    if(p!=NULL && q==NULL)return 0;
    if(p==NULL && q==NULL)return 0;
    return (p->val==q->val)*isSameTree(p->left,q->left)*isSameTree(p->right,q->right);
}

struct TreeNode* create_tree(){
    static int ok=0;
    static struct TreeNode *p=NULL;
        int x;
        struct TreeNode *root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
            root->left=NULL;
            root->right=NULL;
        if(ok==0)p=root;
        ok++;
        printf("val:");
        scanf("%d",&root->val);
            printf("does %d have left?",root->val);
            scanf("%d",&x);
            if(x==1){
                root->left=create_tree();
            }else root->left=NULL;
       
            printf("does %d have right?",root->val);
            scanf("%d",&x);
            if(x==1){
                root->right=create_tree();
            }else root->right=NULL;
        
        

        return root;
}

int main(){
    struct TreeNode *p=create_tree(),*q=create_tree();
    printf("%d",isSameTree(p,q));






    return 0;
}