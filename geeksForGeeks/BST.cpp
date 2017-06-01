// Binary Search tree using linked list
#include <stdio.h>

struct node{
    int element;
    int countElement;
    struct node *left;
    struct node *right;
};

struct node *newNode(int item){

    struct node *temp = new node();

    temp->element = item;
    temp->countElement = 1;

    temp->left = NULL;
    temp->right = NULL;

    return temp;

};
struct node *insertIntoTree(struct node* node, int item, int n){

    if(node == NULL){
        return newNode(item);
    }

    if(item < node->element ){
        node->left = insertIntoTree(node->left, item, n);
    }
    else if(item >= node->element ){
        node->right = insertIntoTree(node->right, item, n);
    }
    return node;
}
void traverse(struct node *root){

    if(root != NULL){
        printf("%d ", root->element);
        traverse(root->left);
        traverse(root->right);
    }

}
int main() {

    int arr[] = {2 , 10, 5, 8, 4, 1};

    struct node *root = NULL;

    int n = 6;

    root = insertIntoTree(root, arr[0], n);
    for(int i=1; i<n; i++){
        insertIntoTree(root, arr[i], n);
    }

    traverse(root);

	return 0;
}
