#include<stdio.h>
int main(){
  int n,m,p;

  printf("Enter the number of elements of 1st ascending sorted array: ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the numbers: ");
  for (int i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  printf("Enter the number of elements of 2nd ascending sorted array: ");
  scanf("%d",&m);
  int b[m];
  printf("Enter the numbers: ");
  for (int i=0; i<m; i++){
    scanf("%d",&b[i]);
  }

  printf("Enter the number of elements of 3rd ascending sorted array: ");
  scanf("%d",&p);
  int c[p];
  printf("Enter the numbers: ");
  for (int i=0; i<p; i++){
    scanf("%d",&c[i]);
  }

  int j, d[n+m+p];

  for (j=0; j<n; j++){
    d[j]=a[j];
  }
    for (int i=0; i<m; i++){
      d[j]=b[i];
      j++;
    }
      for (int k=0; k<p; k++){
        d[j]=c[k];
        j++;
      }

      int temp=0;

  for (int i=0; i<n+m+p; i++){
    for (int j=i+1; j<n+m+p; j++){
      if (d[j]<d[i]){
        int temp=d[i];
        d[i]=d[j];
        d[j]=temp;
      }
    }
  }

  printf("The Sorted Array in Ascending Order: ");
  for (int i=0; i<n+m+p; i++){
    printf("%d ",d[i]);
  }
}