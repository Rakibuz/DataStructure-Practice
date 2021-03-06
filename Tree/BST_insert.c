#include<stdio.h>
typedef struct Node Node;
struct Node{
  int data;
   Node* left;
   Node* right;

};

typedef enum
{
    true=1, false=0
}bool;

Node *GetNewNode(int x){

 Node *newNode=(Node*)malloc(sizeof(Node));
if(newNode==NULL){
    // if it could not allocate memory
    printf("Error! Could not Create a New Node\n");
    exit(1);
}
   newNode->data = x;
   newNode->left = NULL;
   newNode->right = NULL;
   return newNode;
}


// To insert data in BST, returns address of root node
Node* Insert(Node* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree.
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree.
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

//To search an element in BST, returns true if element is found
bool Search(Node* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	Node* root = NULL;  // Creating an empty tree
	/*Code to test the logic*/
	root = Insert(root,15);
	root = Insert(root,10);
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
	// Ask user to enter a number.
	int number;
	printf("Enter number be searched\n");
    scanf("%d",&number);
	//If number is found, print "FOUND"
	if(Search(root,number) == true)
        printf("Found\n");
	else
	    printf("Not Found\n");
}
