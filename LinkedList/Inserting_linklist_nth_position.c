#include<stdio.h>
#include<stdlib.h>
struct Node{

 int data;
 struct Node*next;


};
struct Node* head;

//function declaration
void Insert(int data,int n);
void print();


void Insert(int data,int n)
{

  struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
  struct Node* t;

   //As initially node is empty
  temp->data=data;
  temp->next=NULL;

  // checking all the cases
  if(n==1){
    temp->next=head;
    head=temp; //assigning the address of head
    return;
  }

  t=head;
  int i;

  for(i=1;i<n-1;i++){
    t=t->next;
  }
  temp->next=t->next;
  t->next=temp;


}


void print(){

 struct Node* temp=head;

 while(temp!=NULL){

    printf("%d ",temp->data);
    temp=temp->next;
 }

  printf("\n");
}



int main(){

head=NULL; //empty list

Insert(2,1);
Insert(3,2);
Insert(4,1);
Insert(5,2);
print();



}
