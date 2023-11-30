#include <stdio.h>

void func(int x)
{
	++x;
	printf("%d", x);
}

int main()
{
	int x = 10;
	
	func(++x);
	func(x++);
	
	printf("%d", x);

	return 0;
}
