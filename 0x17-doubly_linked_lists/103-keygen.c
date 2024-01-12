#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - To generate password for crackme5 file.
 * @argc: num of arguments for program.
 * @argv: Array of ptrs to arguments.
 *
 * Return: 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *hold;
	int length = strlen(argv[1]), start, tp;

	hold = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tp = (len ^ 59) & 63;
	pass[0] = hold[tp];

	tp = 0;
	for (start = 0; start < length; start++)
		tp += argv[1][start];
	pass[1] = hold[(tp ^ 79) & 63];

	tp = 1;
	for (start = 0; start < length; start++)
		tp *= argv[1][start];
	pass[2] = hold[(tp ^ 85) & 63];

	tp = 0;
	for (start = 0; start < length; start++)
	{
		if (argv[1][start] > tp)
			tp = argv[1][start];
	}
	srand(tp ^ 14);
	pass[3] = hold[rand() & 63];

	tp = 0;
	for (start = 0; start < length; start++)
		tp += (argv[1][start] * argv[1][start]);
	pass[4] = hold[(tp ^ 239) & 63];

	for (start = 0; start < argv[1][0]; start++)
		tp = rand();
	pass[5] = hold[(tp ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
