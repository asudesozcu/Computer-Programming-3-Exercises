#include <stdio.h>
#include <stdlib.h>

void trueAllocater(int **ptrTrueAllocater);
int main() {
    // Your code here
    return 0;
}
void trueAllocater(int **ptrTrueAllocater)
{
 *ptrTrueAllocater = (int *) malloc(sizeof(int));
 //malloc işlevi, void *  türünde bir işaretçi döndürür
 // bellekten dinamik ,int büyüklüğünde blok tahsis eder. 
 //pointerın işaret ettiği adresi değiştirir ve bellek bloğunu işaret eder.
 if (ptrTrueAllocater == NULL) {
 printf("in trueAllocater() memory allocation error");
 exit(EXIT_FAILURE);
 }
}