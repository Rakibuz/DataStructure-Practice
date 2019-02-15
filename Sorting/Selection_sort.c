#include<stdio.h>
void selectionSort(int x[],int n){

  int i,j,min,temp;

  for (i=0;i<n-1;i++){
      min=i;
      for(j=i+1;j<n;j++){
        if(x[j]<x[min]){
            min=j; //find most smaller value and change only index number
        }
      }

     // As it is starting from j+1 so new min is calculating
     temp=x[i];
     x[i]=x[min];
     x[min]=temp;

  }
  printf("\nArray After Sorting\n");
  display(x,n);

}

void display(int x[],int n){

  int i;

  for(i=0;i<n;i++){

    printf("%d\t",x[i]);
  }


}
int main(){

  int Array[]={-1,2,1,5,6,6,7,8,12,34,20,1,67,0,-1};
  int n=sizeof(Array)/sizeof(Array[0]);
  printf("Array Before Sorting\n");
  display(Array,n);
  selectionSort(Array,n);


}
