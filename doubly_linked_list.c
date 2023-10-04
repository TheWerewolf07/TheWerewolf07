#include<stdio.h>
#include<stdlib.h>
struct node{
     char data;
     struct node*pre;
     struct node*next;
   };
struct node*head=NULL;
struct node*tail=NULL;
void insert_last(char c){
     struct node*temp=(struct node*)malloc(sizeof(struct node));
     temp->data=c;
     
     if(head==NULL && tail==NULL){
         temp->next=NULL;
         temp->pre=NULL;
         head=temp;
         tail=temp;
         }
     else{
          tail->next=temp;
          temp->pre=tail;
          temp->next=NULL;
          tail=temp;
          }
 }
 void insert_first(char c){
     struct node*temp=(struct node*)malloc(sizeof(struct node));
     temp->data=c;
     
     if(head==NULL && tail==NULL){
         temp->next=NULL;
         temp->pre=NULL;
         head=temp;
         tail=temp;
         }
     else{
         temp->next=head;
         head->pre=temp;
         temp->pre=NULL;
         head=temp;
         
          }
 }
  void insert_pos(char c,int p){
     struct node*temp=(struct node*)malloc(sizeof(struct node));
     temp->data=c;
     int i;
     struct node*y;
     struct node*t;
     y=head;
  
        i=1;
        while(i<p-1){
             y=y->next;
             i++;
             }
             t=y->next;
         y->next=temp;
        temp->pre=y;
        temp->next=t;
        t->pre=temp;
 }
 void delete_pos(int p){
        int i;
        struct node*temp;
        struct node*new;
        struct node*u;
        temp=head;
        i=1;
        while(i<p){
             temp=temp->next;
             i++;
             }
             new=temp->pre;
             u=temp;
        
        (temp->next)->pre=temp->pre;
        temp=temp->next;
        new->next=temp;
        free(u);
        
        }
 
 void delete_first(){
      struct node*p;
      p=head;
      head=head->next;
      head->pre=NULL;
      free(p);
      }
 
 void delete_last(){
      struct node*x;
      x=tail;
      tail=tail->pre;
      tail->next=NULL;
      free(x);
      }
void forward_print(){
      printf("forward display:\n"); 
     
      struct node*p;
      p=head;
      int i=1;
      while(p!=NULL){
            printf("%c",p->data);
            p=p->next;
            i++;
            }
     printf("\n--------------------------------------------\n");
 }
 void backward_print(){
      printf("backward display:\n"); 
      struct node*x;
      x=tail;
      
      int i=1;
      while(x!=NULL){
            printf("%c",x->data);
            x=x->pre;
            i++;
            }
            printf("\n--------------------------------------------\n");
     
 }
 int main(){
     int i,p;
     char name[20],c,ch;
     int choice;
     printf("Enter the string \n");
     scanf("%s",name);
     for(i=0;name[i]!='\0';i++){
         insert_last(name[i]);
         }
         do{
            printf("Enter your choice from followin option \n");
            printf("1.insert at first\n2.insert at position\n3.insert at end\n4.delete at first\n5.delete at end\n6.delete at position\n");
            scanf("%d",&choice);
            switch(choice){
                 case 1:{
                         printf("Enter the character which you want to insert\n");
                         scanf(" %c",&c);
                         insert_first(c);
                         forward_print();
                         backward_print();
                         
                         
                         break;
                         }
                 case 2:{
                        printf("Enter the character which you want to insert\n");
                         scanf(" %c",&c);
                         printf("Enter the position where u which you want to insert\n");
                         scanf("%d",&p);
                         insert_pos(c,p);
                         forward_print();
                         backward_print();
                         
                         
                         break;
                        }
                        
                 case 3:{
                        printf("Enter the character which you want to insert\n");
                         scanf(" %c",&c);
                        
                         insert_last(c);
                         forward_print();
                         backward_print();
                         
                         
                         break;
                        }
                  case 4:{
                        
                         delete_first();
                         forward_print();
                         backward_print();
                         
                         
                         break;
                        }
                  case 5:{
                        
                         delete_last();
                         forward_print();
                         backward_print();
                         
                         
                         break;
                        }
                  case 6:{
                        printf("Enter the position where u which you want to insert\n");
                         scanf("%d",&p);
                         delete_pos(p);
                         forward_print();
                         backward_print();
                         
                         
                         break;
                        }
                     
                        
                 default:{
                       printf("Sorry invalid input\n");
                       break;
                       }
                       }
                 printf("Do you want to Repeate it press the key C\n");
                 scanf(" %c",&ch);
          }while(ch=='C' || ch=='c');
     
     return 0;
     }
     
           
      
     
          
          
           
    
