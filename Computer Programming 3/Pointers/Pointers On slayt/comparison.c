#include <stdio.h>
int main() {

int  array[5];
int* ptr1= array;//  // ptr1, array'in adresini işaret eder
int* ptr2= &array[0];
if(ptr1==ptr2){
    printf("%s", "they are equal");
}
    return 0;
}