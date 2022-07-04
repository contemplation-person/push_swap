#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	while(*++argv)
	{
		i = 0;
		while(argv[0][i])
		{
			printf("**argv:%c",argv[0][i++]);

		}
		printf("\n");
		printf("step : %s\n",*argv);
	}

	return 0;
}
