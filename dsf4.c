#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node*prev;
    struct node*next;
};

struct node*head=NULL;
struct node*tail=NULL;

struct node*createnode(char c){
    struct node*n;
    n=malloc(sizeof(struct node));
    n->data=c;
    n->prev=0;
    n->next=0;
    return n;
}

void createDLL(char c){
    struct node*n=createnode(c);
    if(head==0 && tail==0){
            head=n;
            tail=n;
    }
    else
            tail->next=n;
            n->prev=tail;
            tail=n;
            return;
    }

    void insert_front(char c){
        struct node*n=createnode(c);
        if(head==0 && tail==0){
            head=n;
            tail=n;
        }
        else
            head->prev=n;
            n->next=head;
            head=n;
            return;
    }
    void insert_end(char c){
        struct node*n=createnode(c);
        if(head==0 && tail==0){
            head=n;
            tail=n;
        }
        else
            tail->next=n;
            n->prev=tail;
            // tail=tail->next;
            tail=n;
            return ;
    }
    void delete_front(){
        if(head==0){
            return;
        }
        else{
            struct node*ptr=head;
            head=head->next;
            head->prev=0;
            free(ptr);
            return  ;
        }
    }
    void delete_end(){
        if(head==0 && tail==0){
            return ;
        }
        else{
            struct node*p=tail;
            p=tail;
            tail=tail->prev;
            tail->next=0;
            free(p);
            return;
        }
    }
    // void delete_pos(){
    //     int pos;
    //     printf("enter position\n");
    //     scanf("%d",&pos);
    //     if(pos==1){
    //         delete_front();
    //         return;
    //     }
    //     if(pos==length()){
    //         delete_end();
    //         return;
    //     }
    //     if(pos>length()){
    //         return;
    //     }
    //     else{
    //         int l=NULL;
    //         struct node*temp=head, *ptr;
    //         while(l<pos-1);
    //         {
    //             temp=temp->next;
    //         }
    //         ptr=temp->next;
    //         temp->next=ptr->next;
    //         ptr->next->prev=ptr->prev;
    //         free(ptr);
    //         return;
    //     }
    // }
    void display_forward(){
        struct node*p=head;
        if(head==0){
            printf("empty list\n");
            return;
        }
        else{
            while(p!=0){
                printf("%c",p->data);
                p=p->next;
            }
        }
    }
    void sdisplay_backward(){
        struct node*p=tail;
        if(tail==0){
            printf("empty list\n");
            return;
        }
        else{
            while(p!=0){
                printf("%c",p->data);
                p=p->next;
            }
            return;
        }
    }int main(){
        char str[100];
        int i=0;
        printf("enter string\n");
        scanf("%s",&str);
        for(i=0;str[i]!='\0';i++){
        insert_end(str[i]);
        }
        insert_front('a');
        display_forward();
        insert_end('b');
        // delete_front();
        // delete_end();
        display_forward();
        // display_backward();
        return 0;

    }
