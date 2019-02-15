#include<stdio.h>
void insertionSort(int x[],int n){

  int i,j,temp;

  for(i=1;i<n;i++){
        temp=x[i];
        for(j=i;j>=0&& temp<x[j-1];j--) //condition true
        {
            x[j]=x[j-1];
        }

       x[j]=temp;
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
  printf("Total Number of Element %d\n",n);
  printf("Array Before Sorting\n");
  display(Array,n);
  insertionSort(Array,n);


}


