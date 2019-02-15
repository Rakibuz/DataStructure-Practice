#include<stdio.h>
int binarySearch(int x[],int k,int n){
  int low=0,high=(n-1),mid;
   while(low<=high){

        //mid=low+(high-low)/2;
        mid=floor((low+high)/2);
        if(k==x[mid]){
            return mid;
        }
        if(k<x[mid]){
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
   }
   return -1;
}
int main(){

  int array[] = {2, 3, 4, 10, 40};
  int n = sizeof(array)/ sizeof(array[0]);
  int key=4,result;
  result=binarySearch(array,key,n);

  if(result==-1)
    printf("Element Not Found In the Array");
  else
    printf("Element Found in position %d",result);

}
