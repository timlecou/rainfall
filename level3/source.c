#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	m;

void	v(void)
{
	char	local_20c[520];

	fgets(local_20c, 512, stdin);
	printf(local_20c);
	if (m == 64)
	{
		fwrite("Wait what?!\n", STDOUT_FILENO, 12,stdout);
		system("/bin/sh");
	}
}

int	main(void)
{
	v();
}
