#include <stdio.h>
void main()
{
    int n, *nn;
    printf("Enter the structure :\n");
    scanf("%d\n", &n);
    *nn = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d value:\n",i);
        scanf("%d",&nn[i]);
    }
    printf("\n");
    printf("The result is: \n");
    for(int i=0;i<n;i++){ 
        printf("%d\n",nn[i]);
    
    }
}