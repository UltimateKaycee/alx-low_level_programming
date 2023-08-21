#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int onerand;

	int count;

	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
	onerand = (rand() % 125) + 1;

	printf("%c", onerand);

	total -= onerand;
	}
	printf("%c", total);
	return (0);
}
