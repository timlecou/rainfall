void main(int argc, char **argv)
{
	N *n_1;
	N *n_2;

	if (argc < 2)
		exit(1);

	n_1 = (N *)operator_new(108);
	N::N(n_1, 5);

	n_2 = (N *)operator_new(108);
	N::N((N *)n_2, 6);

	N::setAnnotation(n_1, *(argv[1]));

	(**(code **)*n_2)(n_2, n_1);
	return;
}
