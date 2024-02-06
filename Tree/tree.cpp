#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * newNode(int data){
    struct node* node1= (struct node*) malloc(sizeof(struct node));
    node1->data=data;
    node1->left=NULL;
    node1->right=NULL;
    return(node1);
}


main(){

struct node *root=newNode(1);
root->left=newNode(2);
root->right=newNode(3);
root->left->left=newNode(4);
return 0;

}