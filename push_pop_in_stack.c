#include<stdio.h>
#include<stdlib.h>
int main(){
  int n;
  printf("Enter the capacity of the Stack: ");
  scanf("%d",&n);
  int stack[n], max_size = n-1;
  int top=-1, choice, in_value;

  for (;;){

    printf("1 for PUSH\n2 for POP\n3 for OUTPUT\nOthers key for EXIT\nENTER: ");
    scanf("%d",&choice);

    if (choice == 1){
      if (top==max_size){
        printf("OVERFLOW!!!\n");
      }

      else {
        printf("Enter value to PUSH: ");
        scanf("%d",&in_value);
        top++;
        stack[top]=in_value;
        printf("PUSH Successfull\n");
      }
    }

    else if (choice == 2){
      if (top==-1){
        printf("UNDERFLOW!!!\n");
      }

      else {
        stack[top]=0;
        top--;
        printf("POP Successfull\n");
      }
    }

    else if (choice == 3){
      printf("Final values of Inside Stack are: \n");
      for (int i=0; i<=top; i++){
        printf("%d \n",stack[i]);
      }
    }

    else 
      exit(0);
  }
}
