#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node*left;
     struct node*right;
     };
struct stack{
     struct node**s;
     int top;
     int size;
     };
void push(struct  stack*st,struct node*t){
      st->top++;
      st->s[st->top]=t;
      }
struct node* pop(struct stack*st){
     struct node*temp=st->s[st->top];
     st->top--;
     return temp;
     }
int isempty(struct stack*st){
    if(st->top==-1)
       return 1;
    else
        return 0;
  }
void i_preorder(struct node*root){
      //printf("IN func1\n");
      struct stack*s;
     
      s=(struct stack*)malloc(sizeof(struct stack));
      s->top=-1;
      printf("Enter the total no. of node of tree\n");
      scanf("%d",&s->size);
      s->s=(struct node**)malloc(s->size*sizeof(struct node*));
      struct node*t=root;
      //printf("IN func2n");
      while(t!=0){
       printf("%d ",t->data);
       push(s,t);
       t=t->left;
       }
       while(!isempty(s)){
        t=pop(s);
        t=t->right;
         while(t!=0){
          printf("%d ",t->data);
          push(s,t);
          t=t->left;
       }
       }
       //printf("IN func3\n");
     }
void i_inorder(struct node*root){
      //printf("IN func1\n");
      struct stack*s;
     
      s=(struct stack*)malloc(sizeof(struct stack));
      s->top=-1;
      printf("Enter the total no. of node of tree\n");
      scanf("%d",&s->size);
      s->s=(struct node**)malloc(s->size*sizeof(struct node*));
      struct node*t=root;
      //printf("IN func2n");
      while(t!=0){
       
       push(s,t);
       t=t->left;
       }
       while(!isempty(s)){
        t=pop(s);
        printf("%d ",t->data);
        t=t->right;
         while(t!=0){
          
          push(s,t);
          t=t->left;
       }
       }
       //printf("IN func3\n");
     }
void i_postorder(struct node*root){
     struct stack*s1,*s2;
     s1=(struct stack*)malloc(sizeof(struct stack));
     s2=(struct stack*)malloc(sizeof(struct stack));
     
      s1->top=-1;
      s2->top=-1;
      printf("Enter the total no. of node of tree\n");
      scanf("%d",&s1->size);
      s1->s=(struct node**)malloc(s1->size*sizeof(struct node*));
      printf("Enter the total no. of node of tree\n");
      scanf("%d",&s2->size);
      s2->s=(struct node**)malloc(s2->size*sizeof(struct node*));
     
     struct node*t=root;
     push(s1,t);
     while(!isempty(s1)){
        t=pop(s1);
        push(s2,t);
        if(t->left!=0){
           push(s1,t->left);}
        if(t->right!=0){
           push(s2,t->right);
        }
        }
     while(!isempty(s2)){
         root=pop(s2);
         printf("%d ",root->data);
         }
         }
         
     
        
       
      
     
struct node* create(){
    int choice;
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data of node if not enter -1\n");
    scanf("%d",&choice);
    if(choice==-1){
         return 0;
         }
    temp->data=choice;
    printf("Enter the left node of %d\n",choice);
    temp->left=create();
     printf("Enter the right node of %d\n",choice);
    temp->right=create();
    return temp;
    }
void preorder(struct node*root){
     if(root==0){
       return ;
       }
     printf("%d ",root->data);
     preorder(root->left);
     preorder(root->right);
     }
void postorder(struct node*root){
     if(root==0){
       return ;
       }
     
     postorder(root->left);
     postorder(root->right);
     printf("%d ",root->data);
     }
void inorder(struct node*root){
     if(root==0){
       return ;
       }
     
     inorder(root->left);
     printf("%d ",root->data);
     inorder(root->right);
     
     }
int main(){
    struct node*root=0;
    root=create();
    printf("\nRecursive preorder : \n");
    preorder(root);
    printf("\nnon-Recursive preorder : \n");
    i_preorder(root);
    printf("\nRecursive inorder : \n");
    inorder(root);
    printf("\nnon-Recursive inorder : \n");
    i_inorder(root);
   
    printf("\nRecursive postorder : \n");
    postorder(root);
    printf("\nnon-Recursive postorder : \n");
    i_postorder(root);
    return 0;
    }
    

  
  
    
    
