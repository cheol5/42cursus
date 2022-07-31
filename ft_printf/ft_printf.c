#include <stdio.h>
#include <stdarg.h>

void printValues(char *types, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, types);
	while (types[i] != 0)
	{
		switch (types[i])
		{
		case 'i':
			printf("%d ", va_arg(ap, int));
		case 'd':
		printf("%f ", va)
		}
	}
}