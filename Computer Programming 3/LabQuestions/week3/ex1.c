#include <stdio.h>

int main() {
   int number[3];
   printf("Please enter 10 integer");
for (int i = 0; i < sizeof(number)/sizeof(number[0]); i++)
{   
scanf("%d",&number[i]); 

}
 for (int i = 0; i < sizeof(number)/sizeof(number[0]); i++)
   {
      printf("%d ",number[i]);
//printf("%d\n",number[i]);
  
   }
   return 0;
   
}