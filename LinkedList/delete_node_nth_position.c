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
void Delete(int n);

void Delete(int n)
{
    struct Node* temp1=head;

    if(n==1)
    {
        head=temp1->next;
        free(temp1);
        return;

    }
    int i;
    for(i=1;i<n-1;i++)
     temp1=temp1->next; //temp1 points to (n-1) Node


    struct Node* temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}



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
int n;
while(1){
   printf("Enter a position\n");
   scanf("%d",&n);
   Delete(n);
   print();


}


}
