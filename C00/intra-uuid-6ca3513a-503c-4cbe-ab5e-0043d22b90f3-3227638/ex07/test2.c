#include <unistd.h>

int main(void)
{
	int x;
	int y;
	int z;

	y = 148;
	z = 100;
	x = 614 % 10 + 48;
	

	write(1, &x, 1);
}


