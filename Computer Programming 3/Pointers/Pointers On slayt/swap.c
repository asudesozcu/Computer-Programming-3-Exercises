#include <stdio.h>
void swap(int* a,int* b);
int main() {
int x=5;
int y=10;
int *a=&x;
int *b=&y;
printf("x:%d ,y:%d" ,x ,y);

swap(a,b);
printf("\nx:%d ,y:%d" ,x ,y);
}

void swap(int* a,int* b){
int temp=*a;
*a=*b;
*b=temp;}
