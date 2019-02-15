#include<stdio.h>
#include<stdlib.h>
struct Node{

 int data;
 struct Node*next;


};
struct Node* head;
void insert_at_end(int x);
void print();


 void insert_at_end(int x)
{
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
  struct Node* t;
  if(head==NULL){

    head=temp;
    head->data=x;
    head->next=NULL;
    return;
  }
  t=head;
  while(t->next!=NULL)
  {
    t=t->next;
  }
  t->next=temp;
  temp->data=x;
  temp->next=NULL;

}



int main(){

 head==NULL; //empty list
 printf("How many numbers?\n");
 int n,i,x;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    printf("Enter the number\n");
    scanf("%d",&x);
    insert_at_end(x);
    print();
 }


}

void print(){

 struct Node* temp=head;

 while(temp!=NULL){

    printf("%d ",temp->data);
    temp=temp->next;
 }

  printf("\n");
}
