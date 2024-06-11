//Inorder traversal binary tree
#include <stdio.h>
#include <stdio.h>

//node struct
typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

//function to create a node
Node *newNode (int data){
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

//function to insert a new node in the search binary tree
Node *insert(Node *node, int data){
    if (node == NULL){
        return newNode(data);
    }
    if (data < node->data){
        node->left = insert(node->left, data);
    }else if (data > node->data){
        node->right = insert(node->right, data);
    }
    return node;
}
//function to make the travese inorder
void inorder_traversal(Node *root){
    if (root != NULL){
        inorder_traversal(root->left);
        printf("%d ", root->data);
        inorder_traversal(root->right);
    }
}

int main(){
    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    printf("Inorder traversal of the binary search: ");
    inorder_traversal(root);
    printf("\n");
    return 0;
}
