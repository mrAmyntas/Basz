#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a[10];
	a[0] = 48;
	a[1] = 49;
	a[2] = 50;
	a[3] = 51;

	
	write(1, &a[0], 32);
	write(1, &"\n", 1);
	printf("%d\n", a[3]);
}


