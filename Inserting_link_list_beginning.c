#include<stdio.h>
#include<stdlib.h>
struct Node{

 int data;
 struct Node*next;

};
struct Node* head;

//function declaration
void Insert_at_begain(int x);
void print();

int main(){

 head==NULL; //empty list
 printf("How many numbers?\n");
 int n,i,x;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    printf("Enter the number\n");
    scanf("%d",&x);
    Insert_at_begain(x);
    print();
 }

}


void Insert_at_begain(int x)
{

  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
  temp->data=x;
  temp->next=head;
  head=temp;
}


void print(){

 struct Node* temp=head;

 while(temp!=NULL){

    printf("%d ",temp->data);
    temp=temp->next;
 }

  printf("\n");
}


