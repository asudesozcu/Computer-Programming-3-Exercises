#include <stdio.h>

int printFunc(int a[], int length)
{
        //ÇALIŞMAZ int length=sizeof(numbers)/sizeof(numbers[1]);

    for (size_t i = 0; i < length; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    int arrayex[] = {3, 4, 5, 6, 7, 8};
    int length = sizeof(arrayex) / sizeof(arrayex[0]);
    printFunc(arrayex,length);
    return 0;
}