#include <stdio.h>
#include <math.h>
void main(){
    int n,i,j = sqrt(n),k;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the key value:");
    scanf("%d",&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    printf("Given array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    int key=a[k];
    while(i<n){
        if(a[j]==key){
            printf("Element found.");
        }
        else if(j<key){
            i=j;
            j+=j;

        }
        else{
            j--;
        }
    }

}