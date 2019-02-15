#include<stdio.h>
int left(int i){
  return 2*i;
}
int right(int i){

  return 2*i+1;
}

int parent(int i){

  return i/2;
}

void max_heapify(int heap[],int heap_size,int i){

int l,r,largest,t;

l=left(i);
r=right(i);

if(l<=heap_size && heap[l]>heap[i]){
    largest=l;
}
else
{
    largest=i;
}


if(r<=heap_size && heap[r]>heap[largest]){
   largest=r;
}

if(largest!=i){
    t=heap[i];
    heap[i]=heap[largest];
    heap[largest]=t;

    max_heapify(heap,heap_size,largest);

}


}

int extract_max(int heap[],int heap_size){

  int max_item=heap[1];

  heap[1]=heap[heap_size];

  heap_size -=1;

  max_heapify(heap,heap_size,1); //as last leaf node placed at 1

  return max_item;

}

int insert_node(int heap[],int heap_size,int node){

 int i,p,t;

 heap_size +=1; // as adding a node increase heap size
 heap[heap_size]=node; //adding a node at last index

 i=heap_size;

 while(i>1 && heap[i]>heap[parent(i)]){

    p=parent(i); //p is parent index

    t=heap[p];
    heap[p]=heap[i];
    heap[i]=t;

    i=p;
 }


 return heap_size;
}
int main(){
int heap_size=9;
int heap[]={0,19,10,17,5,7,12,1,2,3};
int i,c,max,node;

printf("Heap:\n");
for(i=0;i<heap_size;i++){
    printf("%d ",heap[i]);
}
printf("\n\n");
while(1)
{

printf("Enter 1 for extract max:\n");
printf("Enter 2 for adding node:\n");
scanf("%d",&c);

if(c==1)
{

    max=extract_max(heap,heap_size);
    printf("Max item is : %d \n",max);


}
if(c==2)
{
    printf("Insert the value of the node:\n");
    scanf("%d",&node);
    insert_node(heap,heap_size,node);

    printf("Heap size now: %d\n",heap_size);

    printf("The Heap after adding a node:\n");
    for(i=0;i<heap_size;i++)
    {
       printf("%d ",heap[i]);
    }
    printf("\n\n");
}

}

}
