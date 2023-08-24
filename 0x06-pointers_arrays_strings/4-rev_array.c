#include "main.h"

/**
 * reverse_array - function to reverse the contents of an array
 * @bloom: sn array of integers
 * @bleak: number of items in array
 */

void reverse_array(int *bloom, int bleak)
{
	int nice;

	int fine;

	for (nice = 0; nice < (fine / 2); nice++)
	{
	fine = bloom[nice];

	bloom[nice] = bloom[bleak - nice - 1];

	bloom[bleak - nice - 1] = fine;
	}
}
