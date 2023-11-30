#include <stdio.h>
int main() {

int array[]={1,2,3,4,5};
int array2[sizeof(array)/sizeof(int)];
int *ptr=array;
for (size_t i = 0; i <sizeof(array)/sizeof(int) ; i++)
{
array2[i]=*ptr;
ptr++;
}



    return 0;
}