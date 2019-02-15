#include<stdio.h>
#define MAX_SIZE 101
int front;
int rear;
int array[MAX_SIZE];

typedef enum
{
    true=1, false=0
}bool;


bool isEmpty(){

 return (front == -1 && rear == -1) ? true : false;

}

bool isFull(){

   return (rear+1)%MAX_SIZE == front ? true : false;
}

void enqueue(int x){

  if(isFull())
  {
    printf("Queue is full\n");
    return;
  }
  else if(isEmpty())
  {
     rear=front=0;
  }
  else
  {
    rear=(rear+1)%MAX_SIZE;

  }

array[rear]=x;


}

void dequeue(){

 if (isEmpty())
 {
   printf("Queue is empty");
    //return;
 }
 else if(front==rear)
    front=rear=-1;
 else
    front=(front+1)%MAX_SIZE;

}


int Front(){

 return array[front];

}


void print(){
    int i;
    int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1; // actually rear position
    printf("Queue       : ");
    for(i = 0; i <count; i++)
		{
			int index = (front+i) % MAX_SIZE; // From Dequeue's(front)  position till i++  rear
			 printf("%d",array[index]);
		}

    printf("\n\n");

}




int main(){

  front = -1;
  rear = -1;
  enqueue(2);print();
  enqueue(4);print();
  enqueue(6);print();
  printf("Array Front %d",array[front]);


}
