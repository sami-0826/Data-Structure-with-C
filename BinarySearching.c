#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    if (n==0){
        printf("Array Is Empty!");
    }

    else {
        int a[n];
        printf("Enter the numbers in ascending order: \n");
        for (int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }

        int sv,beg=0,end=n-1,mid=(beg+end)/2,found=0;
        
        printf("Enter the value to search: ");
        scanf("%d",&sv);

        while (beg<=end){
            if (a[mid]==sv){
                found=1;
                break;
            }

            else if (beg==end){
                break;
            }

            else if (a[mid]>sv){
                end = mid-1;
                mid = (beg+end)/2;
            }
            
            else {
                beg = mid+1;
                mid = (beg+end)/2;
            }
        }

        (found==1)? printf("Search Value Found") : printf("Search Value Not Found");
    }
}