#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char	c;

void	m(void)
{
	printf("%s - %d\n", &c, (int)time(NULL));
}

int	main(int argc, char **argv)
{
	void **tab1 = malloc(8);
	tab1[0] = (void *)0x1;
	tab1[1] = malloc(8);

	void **tab2 = malloc(8);
	tab2[0] = (void *)0x2;
	tab2[1] = malloc(8);

	strcpy(tab1[1], argv[1]);
	strcpy(tab2[1], argv[2]);

	FILE *pass_file = fopen("/home/user/level8/.pass", "r");
	fgets(&c, 0x44, pass_file);

	puts("~~");
	return (EXIT_SUCCESS);
}
