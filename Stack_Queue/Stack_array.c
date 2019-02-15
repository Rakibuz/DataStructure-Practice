 #include<stdio.h>
 #define MAX_SIZE 10
 int A[MAX_SIZE];
 int top=-1;

 //insert  element on top of stack.
 void push(int x){
  if(top == MAX_SIZE -1) { // overflow case.
		printf("Error: stack overflow\n");
		return;
	}
 A[++top]=x;
 }

 // remove an element from top of stack.
void Pop()
{
	if(top == -1) { // If stack is empty, pop should throw error.
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}
// return element at top of stack.


int Top()
{
	return A[top];
}

// This function will return 1 (true) if stack is empty, 0 (false) otherwise
int IsEmpty()
{
    if(top == -1) return 1;
    return 0;
}

void display(int x[],int top){

 int i;
 for (i=0;i<=top;i++){
    printf("%d ",x[i]);
 }

}

 int main(){


  push(2);
  push(5);
  push(10);
  Pop();
  push(12);
  display(A,top);

 }
