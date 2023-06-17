#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generate and prints password crackme5 executables
 * @argc: Number of arguments given to program
 * @argv: Array of pointers to arguments
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pass[7], *codeme;
	int lent = strlen(argv[1]), z, temp_c;

	codeme = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp_c = (lent ^ 59) & 63;
	pass[0] = codeme[temp_c];

	temp_c = 0;
	for (z = 0; z < lent; z++)
		temp_c += argv[1][z];
	pass[1] = codeme[(temp_c ^ 79) & 63];

	temp_c = 1;
	for (z = 0; z < lent; z++)
		temp_c *= argv[1][z];
	pass[2] = codeme[(temp_c ^ 85) & 63];

	temp_c = 0;
	for (z = 0; z < lent; z++)
	{
		if (argv[1][z] > temp_c)
			temp_c = argv[1][z];
	}
	srand(temp_c ^ 14);
	pass[3] = codeme[rand() & 63];

	temp_c = 0;
	for (z = 0; z < lent; z++)
		temp_c += (argv[1][z] * argv[1][z]);
	pass[4] = codeme[(temp_c ^ 239) & 63];

	for (z = 0; z < argv[1][0]; z++)
		temp_c = rand();
	pass[5] = codeme[(temp_c ^ 229) & 63];

	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
