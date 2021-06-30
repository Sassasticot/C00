#include <unistd.h>

void ft_is_negative(int n)
{
	char p;
	char ne;
	p = 'P';
	ne ='N';

	if (n >= 0)
		
		write(1, &p, 1);

	if (n <0)

		write(1, &ne, 1);
}
		
