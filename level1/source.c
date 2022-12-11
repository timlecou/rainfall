#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	run(void)
{
	fwrite("Good... Wait what?\n", STDIN_FILENO, 19, stdout);
	system("/bin/sh");
}

int	main(void)
{
	char	buf[76];

	gets(buf);
	return (EXIT_SUCCESS);
}
