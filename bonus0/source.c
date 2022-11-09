
void pp(char *buf)

{
	unsigned int	uVar2;
	char			*buf_copy;
	char			tmp1 [20];
	char			tmp2 [20];

	p(tmp1);
	p(tmp2);

	strcpy(buf, tmp1);

	uVar2 = 0xffffffff;

	buf_copy = buf;

	strcat(buf, ' ');
	strcat(buf, tmp2);
	return;
}

void	p(char *tmp)
{
	char big_buf [4104];

	puts('-');
	read(STDIN_FILENO, big_buf, 4096);
	strncpy(tmp, big_buf, 20);
	return;
}

int	main(int argc, char **argv)
{
	char buf [54];

	pp(buf);
	puts(buf);
	return (0);
}
