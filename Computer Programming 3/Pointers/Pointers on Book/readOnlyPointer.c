#include <stdio.h>
void printCharacters(const char *sPtr);
int main() {
    char string[]="print characters";
    printCharacters(string);
    return 0;
}
void printCharacters(const char *sPtr){
    for (; *sPtr !='\0'; ++sPtr)
    {
        printf("%c",*sPtr);
    }
    
}