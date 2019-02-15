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

void heap_sort(int heap[],int heap_size){

int i,t;


for(i=heap_size;i>1;i--){

    t=heap[1];
    heap[1]=heap[i];
    heap[i]=t;

    heap_size--;
    max_heapify(heap,heap_size,1);
}

}


int main(){

int heap_size=9;
int heap[]={0,19,10,17,5,7,12,1,2,3};
int i;

printf("Heap Before sorting:\n");
for(i=0;i<heap_size;i++){
    printf("%d ",heap[i]);
}

heap_sort(heap,heap_size);

printf("\n");
printf("Heap Before sorting:\n");
for(i=0;i<heap_size;i++){
    printf("%d ",heap[i]);
}

}
