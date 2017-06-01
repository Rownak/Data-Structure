#include <stdio.h>

struct node{
    int element;
    int countElement;
    struct node *left;
    struct node *right;
};
int mEFound = 0;

struct node *newNode(int item){

    struct node *temp = new node();
    temp->element = item;
    temp->countElement = 1;

    temp->left = NULL;
    temp->right = NULL;

    return temp;

};
struct node *insertIntoTree(struct node *node, int item, int n){

    if(node == NULL){
        return newNode(item);
    }

    if(item < node->element ){
        node->left = insertIntoTree(node->left, item, n);
    }
    else if(item > node->element ){
        node->right = insertIntoTree(node->right, item, n);
    }
    else if(item == node->element ){
        node->countElement++;
       // printf("Repeat: %d\n", node->element);
        if(node->countElement > n/2){
            mEFound = 1;
            return node;
        }
    }
    return node;


}

int majorityElement(int arr[], int n){

    if(n==1){
        return arr[0];
    }
    struct node *root = NULL;
    struct node *result;
    root = insertIntoTree( root, arr[0], n);
     for(int j= 1; j<n; j++){
            mEFound = 0;
            //printf("Insert %d\n", arr[j]);
            result = insertIntoTree( root, arr[j], n);
            if(mEFound){
                return arr[j];
            }
     }

     return -1;
}

int main() {

    int arr[1000];
    int t, n;
    scanf("%d", &t);
    int i=0;
    while(i<t){

        scanf("%d", &n);
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        int output = majorityElement(arr, n);
        if(output == -1){
            printf("NO Majority Element\n");

        }
        else{
            printf("%d\n", output);
        }
        i++;
    }
	return 0;
}
