#include <stdio.h>
int main() {
    int arr[]={1,2,3,4,5};
    int* ptr1=arr;
    
    for (size_t i = 0; i < 5; i++)
    {
printf("%d",ptr1[0]); // ptr1[0]=*ptr1
ptr1++;

    }
    
    return 0;
}