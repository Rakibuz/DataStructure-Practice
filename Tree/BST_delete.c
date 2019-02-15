#include<stdio.h>
typedef struct Node Node;
struct Node{
  int data;
   Node* left;
   Node* right;

};


//Function to find minimum in a tree.
Node* FindMin(Node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}


// Function to search a delete a value from tree.
struct Node* Delete(struct Node *root, int data) {
	if(root == NULL) return root;
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	 
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) {
			free(root);
			root = NULL;
		}
		//Case 2: One child
		else if(root->left == NULL) {
			struct Node *temp = root;
			root = root->right;
			free(temp);
		}
		else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			free (temp);
		}
		// case 3: 2 children
		else {
			struct Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}

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

void in_order(Node *node){



if(node->left !=NULL){
    in_order(node->left);
}
printf("%d ",node->data);

if(node->right !=NULL){
    in_order(node->right);
}


}


int main(){

	/*Code To Test the logic
	  Creating an example tree
                5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4);
	root = Insert(root,1); root = Insert(root,11);


// Deleting node with value 5, change this value to test other cases
   root = Delete(root,5);

   in_order(root);

}

