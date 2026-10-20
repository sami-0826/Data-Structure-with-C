#include<stdio.h>
int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter Numbers: \n");
  for (int i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  int sv, found=0;

  printf("Enter Search Value: ");
  scanf("%d",&sv);

  for (int i=0; i<n; i++){
    if (sv==a[i]){
      printf("Found At Index: %d\n",i);
      found=1;
    }
  }
  if (found==0){
    printf("Search Value Not Found");
  }

}