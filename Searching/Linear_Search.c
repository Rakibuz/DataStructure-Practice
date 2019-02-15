#include<stdio.h>
int linear_search(int A[20],int n,int x){
  int i,count=0;
  for(i=0;i<n;i++){
    if(A[i]==x)
    {
        printf("Found in position: %d\t",i+1);
        printf("\n");
        count++;
    }

  }
  return count;
}

int main(){
  int i,n,x,occ;
  printf("Enter number of Element in the Array\n");
  scanf("%d",&n);
  int Array[n];
  printf("Enter number of To search\n");
  scanf("%d",&x);
  printf("Enter numbers\n");
  for(i=0;i<n;i++){
    scanf("%d",&Array[i]);
  }
  occ=linear_search(Array,n,x);
  if(occ==0){
    printf("Not Found In the Array");
  }
  else
  {
    printf("Multiple Occurrence is %d times",occ);

  }


}
