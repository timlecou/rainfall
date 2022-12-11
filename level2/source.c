#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	p(void)
{
	char	buf[76];
	void	*unaff_retaddr;

	fflush(stdout);
	gets(buf);
	if (((long)unaff_retaddr &  (long)0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", unaff_retaddr);
		exit(EXIT_FAILURE);
	}
	puts(buf);
	strdup(buf);
}

int	main(void)
{
	p();
	return (EXIT_SUCCESS);
}
