int main(int argc, char **argv)
{
	int input;
	char *buff_cpy;
	char buff_1 [16];
	char buff_2 [66];
	FILE *pass_fd;

	pass_fd = fopen("/home/user/end/.pass","r");
	buff_cpy = buff_1;
	for (input = 33; input != 0; input--)
	{
		*buff_cpy = 0;
		buff_cpy++;
	}
	if ((pass_fd == (FILE *)0) || (argc != 2))
		return (1);
	else
	{
		fread(buff_1, 1, 66, pass_fd);
		input = atoi(argv[1]);
		buff_1[input] = 0;

		fread(buff_2, 1, 65, pass_fd);
		fclose(pass_fd);
		input = strcmp(buff_1, argv[1]);

		if (input == 0)
			execl("/bin/sh", "sh", 0);
		else
			puts(buff_2);
	}
	return (0);
}
