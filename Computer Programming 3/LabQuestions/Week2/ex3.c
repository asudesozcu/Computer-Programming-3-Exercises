#include <stdio.h>
#include "ex3.h"
int a=15;
int change1(int a)
{
    a = 10;
    printf("The value of  variable : %d\n", a);
    return a;
}
int change2(int a)
{
    a = 20;
        printf("The value of  variable : %d\n", a);

    return a;
}
int main()
{
    
    change1(a);
    change2(a);
    printf("%d", a);

    return 0;
}