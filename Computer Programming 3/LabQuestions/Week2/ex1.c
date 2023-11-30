#include <stdio.h>

void calculate(int a,float b){
printf("%zu\n",sizeof(a+b)) ;
}

void calculate2(double a,float b){
printf("%zu",sizeof(a+b)) ;
}

int main() {
int a=5;
double b=10.2;
float c=4.74;
calculate(a,c);
calculate2(b,c);
    return 0;
}