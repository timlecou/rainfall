#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	n(void)
{
	system("/bin/cat /home/user/level7/.pass");
}

void	m(void)
{
	puts("Nope");
}

int	main(int argc, char **argv)
{
	char *buf = malloc(64);
	void (*fn)() = malloc(4);
	fn = (void (*) ())0x08048468;
	strcpy(buf, argv[1]);
	fn();
	return (EXIT_SUCCESS);
}
