#include<stdio.h>
typedef struct Node Node;
struct Node{
  int data;
   Node* left;
   Node* right;

};

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

void add_left_child(Node *node, Node *child)
{

    node->left=child;
}

void add_right_child(Node *node, Node*child)
{
    node->right=child;
}

Node *create_tree(){


  Node *two=GetNewNode(2);
  Node *seven=GetNewNode(7);
  Node *nine=GetNewNode(9);
  add_left_child(two,seven);
  add_right_child(two,nine);

  Node *one=GetNewNode(1);
  Node *six=GetNewNode(6);
  add_left_child(seven,one);
  add_right_child(seven,six);

  Node *eight=GetNewNode(8);
  add_right_child(nine,eight);

  Node *five=GetNewNode(5);
  Node *ten=GetNewNode(10);
  add_left_child(six,five);
  add_right_child(six,ten);

  Node *three=GetNewNode(3);
  Node *four=GetNewNode(4);
  add_left_child(eight,three);
  add_right_child(eight,four);

  return two;

}



int main(){

 Node *root=create_tree();

printf("%d\n",root->data);

return 0;



}
