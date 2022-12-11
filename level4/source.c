#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	m;

void	p(char *param_1)
{
	printf(param_1);
}

void	n(void)
{
	char	local_20c[520];

	fgets(local_20c, 512, stdin);
	p(local_20c);
	if (m == 0x1025544)	// (m == 16930116)
	{
		system("/bin/cat /home/user/level5/.pass");
	}
}

int	main(void)
{
	n();
}
