#include<stdio.h>
int main(){
  int m,p;

  printf("Enter the number of element for 1st array: ");
  scanf("%d",&m);
  int b[m];
  printf("Enter the Elements: \n");
  for (int i=0; i<m; i++){
    scanf("%d",&b[i]);
  }

  printf("Enter the number of element for 2nd array: ");
  scanf("%d",&p);
  int c[p];
  printf("Enter the Elements: \n");
  for (int i=0; i<p; i++){
    scanf("%d",&c[i]);
  }

  int j,a[m+p];

  for (j=0; j<m; j++){
    a[j]=b[j];
  }

    for (int i=0; i<p; i++){
      a[j]=c[i];
      j++;
    }

  printf("After Merged: ");
  for (int i=0; i<m+p; i++){
    printf("%d ",a[i]);
  }
}