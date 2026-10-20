#include <stdio.h>
int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);

  if (n==0){
    printf("Search Not Possible due to empty array");
  }

  else {

    int a[n];
    printf("Enter numbers in ascending order: \n");
    for (int i=0; i<n; i++){
      scanf("%d",&a[i]);
    }

    int sv,found=0;
    printf("Enter the search value: ");
    scanf("%d",&sv);

    int lin_count=0;
    for (int i=0; i<n; i++){
      lin_count++;
      if (a[i]==sv){
        found=1;
        break;
      }
    }

    int beg=0, end=n-1, mid=(beg+end)/2, bin_count=0;

    while (beg<=end){
      bin_count++;
      if (a[mid]==sv){
        found=1;
        break;
      }

      else if(beg==end){
        break;
      }

      else if (a[mid]>sv){
        end = mid-1;
        mid = (end+beg)/2;
      }

      else {
        beg = mid+1;
        mid = (end+beg)/2;
      }
    }

    (found==1)? printf("Search Value Found\n"):printf("Search Value Not Found\n");

    if (lin_count>bin_count){
      printf("Linear Search Takes More time to search\n");
    }
    else if (bin_count>lin_count){
      printf("Binary Search Takes More time to search\n");
    }
    else 
      printf("Binary and Linear Searching takes similar time to search\n");

    printf ("Cycle Count For Linear Search: %d\n",lin_count);
    printf ("Cycle Count For Binary Search: %d\n",bin_count);
  }
}
