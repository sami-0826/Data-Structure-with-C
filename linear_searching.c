#include <stdio.h>
int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements:\n");
  for (int i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  int sv;
  printf("Enter the search value: ");
  scanf("%d",&sv);

  int found=0;

  for (int i=0; i<n; i++){
    if (a[i]==sv){
      found=1;
      break;
    }
  }

  (found==1)? printf("Found"): printf("Not Found");
  
}