#include <stdio.h>
#include <stdlib.h>

typedef struct n{
    int data;
    struct n* next;
}node;

void print_ll(node* root){
    node *iter = root;
    while(iter!=NULL){
        printf("%d ",iter -> data);
        iter = iter-> next;
    }
    printf("\n");
}


void add_ll(node **root , int x){
    if(*root == NULL){
        *root = malloc(sizeof(node));
        (*root) -> data = x;
        (*root) -> next = NULL;
    }
    else{
        node* iter = *root;
        while (iter -> next != NULL) {
            iter = iter -> next;
        }
        iter -> next = malloc(sizeof(node));
        iter = iter -> next;
        iter -> data = x;
        iter -> next = NULL;
    }
}


int main(){
    node *root = NULL;
    add_ll(&root,10);
    add_ll(&root,20);
    add_ll(&root,30);
    print_ll(root);
}
