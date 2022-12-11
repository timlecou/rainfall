#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *auth;
void *service;

int	main(int argc, char **argv)
{
	char tab_1[5];
	char tab_2[2];
	char tab_3[125];

	while (true) {
		printf("%p, %p \n", auth, service);

		if (fgets(tab_1, 128, stdin) == NULL)
			return (EXIT_SUCCESS);

		if (!strncmp(tab_1, "auth ", 5)) {
			auth = malloc(4);
			auth[0] = '\0';
			strcpy(auth, tab_2);
		}
		else if (!strncmp(tab_1, "reset", 5)) {
			free(auth);
		}
		else if (!strncmp(tab_1, "service", 6)) {
			service = strdup(tab_3);
		}
		else if (!strncmp(tab_1, "login", 5)) {
			if (auth[8] == '\0')
				fwrite("Password:\n", 1, 10, stdout);
			else
				system("/bin/sh");
		}
	}
	return (EXIT_SUCCESS);
}
