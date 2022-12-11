#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	o(void)
{
	system("/bin/sh");
	exit(1);
}

void	n(void)
{
	char	local_20c[520];

	fgets(local_20c, 512, stdin);
	printf(local_20c);
	exit(1);
}

int	main(void)
{
	n();
}
