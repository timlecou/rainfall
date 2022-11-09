int	main(int argc, char **argv)
{
	int	buf [40];
	int input;

	input = atoi(argv[1]);
	if (input < 10)
	{
		memcpy(buf, argv[2], input * 4);

		if (input == 0x574f4c46)
			execl("/bin/sh","sh",0);
	}
	else {
		return (1);
	}
	return (0);
}
