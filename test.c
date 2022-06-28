#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int	main()
{
	write(0, "echo >> \"abc\"", 13);
	return (0);
}