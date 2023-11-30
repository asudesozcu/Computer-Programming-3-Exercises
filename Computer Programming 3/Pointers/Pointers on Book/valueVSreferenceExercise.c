#include <stdio.h>
//BYVALUE
int cubeByValue(int n); //Prototype
void cubeByReference(int *nPtr);

int main() {
int a=5;
printf("The original value of a is %d",a);
a=cubeByValue(a);
printf("\nThe new value of a is %d",a);


//Byreference

int b=5;
printf("\n\nThe original value of a is %d",b);
cubeByReference(&b);
// eğer *b yazdırırsam bana değer yazdırır ama parametre olarak *b yazarsam buna adres vermeyelıyım.

printf( "\nThe new value of number is %d\n", b );

}





int cubeByValue(int n){
    return n*n*n;
}

//BYREFERENCE

void cubeByReference(int *nptr){
    *nptr=*nptr * *nptr * *nptr;
}