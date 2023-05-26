#include "sort.h"

int main(void)
{
	int array[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45};
	int len = sizeof(array) / sizeof(array[0]);

	sort_func(array, len);

	for(int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return (0);
}
