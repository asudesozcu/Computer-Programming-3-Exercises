#include <stdio.h>
#include <ctype.h>
void toUpperCase(char *sPtr);//prototype
int main() {
    char stringArray[]="cHarActeRs and 32,98";
    printf("Before:%s",stringArray);
    toUpperCase(stringArray);
    printf("\nAfter:%s",stringArray);

    
        return 0;
}

void toUpperCase(char *sPtr){
while (*sPtr != '\0')//('\0') ==NULL
{
    *sPtr=toupper(*sPtr); //convert to the uppercase
    ++sPtr; // make sptr point to next character

}


}