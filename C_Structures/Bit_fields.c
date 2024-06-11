#include <stdio.h>
void main(){
    struct a{
        unsigned int b1;
        unsigned int b2;
    }s1;
     struct b{
        unsigned int b1:1;
        unsigned int b2:1;
    }s2;
    printf("Size of structure sample a : %d\n",sizeof(s1));
    
    printf("Size of structure sample b : %d\n",sizeof(s2));
}