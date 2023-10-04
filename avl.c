#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int data;
    int height;
    struct node *right;
}*root;

int NodeHeight()
{
    struct node *p=root;
    int hl,hr;
    hl=p && p->left?p->left->height:0;
    hr=p && p->right?p->right->height:0;
    return hl>hr?hl+1:hr+1;
}

int BalanceFactor()
{
    struct node *p=root;
    int hl,hr;
    hl=p && p->left?p->left->height:0;
    hr=p && p->right?p->right->height:0;
    return hl-hr;
}

void insert()
{
    int key;
    struct node *p=root;
    struct node *q;
    struct node *temp=NULL;
    printf("enter the data to enter in the tree\n");
    scanf("%d",&key);
    if(root==NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=key;
        temp->left=NULL;
        temp->right=NULL;
        temp->height=NodeHeight(temp);
        root=temp;
        return ;
    }
    while(p!=NULL)
    {
        q=p;
        if(key==p->data)
        {
            return ;
        }
        else if(key<p->data)
        {
            p=p->left;
        }
        else
        {
            p=p->right;
        }
    }
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=key;
    temp->left=NULL;
    temp->right=NULL;
    temp->height=NodeHeight(temp);
    if(temp->data<q->data)
    {
        q->left=temp;
    }
    else
    {
        q->right=temp;
    }
    temp->height=NodeHeight(temp);
    q->height=NodeHeight(q);
}

struct node *LLRotation()
{
    struct node *p=root;
    struct node *pl=p->left;
    struct node *plr=pl->right;
    pl->right=p;
    p->left=plr;
    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    if(root==p)
    {
        root=pl;
    }
    return pl;
}

struct node *RRRotation()
{
    struct node *p=root;
    struct node *pr=p->right;
    struct node *prl=pr->left;
    pr->left=p;
    p->right=prl;
    pr->height=NodeHeight(pr);
    p->height=NodeHeight(p);
    if(root==p)
    {
        root=pr;
    }
    return pr;
}

struct node *PerformRotation()
{
    struct node *p=root;
    if((BalanceFactor(p)==2) && (BalanceFactor(p->left)==1))
    {
        return LLRotation(p);
    }
    else if((BalanceFactor(p)==-2) && (BalanceFactor(p->right)==-1))
    {
        return RRRotation(p);
    }
    return root;
}

void preorder()
{
    struct node *p=root;
    if(p)
    {
        printf("%d ",p->data);
        preorder(p->left);
        preorder(p->right);
    }
}

int main()
{
    int choice=0;
    while(choice!=-1)
    {
        printf("case 1:insert\ncase 2:preorder\ncase 3:PerformRotation\ncase -1:exit\nenter the choice you want to continue\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: preorder();
                    break;
            case 3: PerformRotation();
                    break;
            case -1:exit(0);
        }
    }
}