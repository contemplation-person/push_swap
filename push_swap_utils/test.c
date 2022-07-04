#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../push_swap.h"

int	main(int argc, char **argv)
{	
	split_num(&argc, &argv);
	while (*(++argv))
	{
		printf("%s", *argv);
	}
	return (0);
}
