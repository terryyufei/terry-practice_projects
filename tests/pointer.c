#include <stdio.h>

int main()
{	
	int a=10;
	int *ptr;
	ptr = &a;
	
	{
		printf("%p", ptr);
	}

	printf("\n");
	return (0);
}
