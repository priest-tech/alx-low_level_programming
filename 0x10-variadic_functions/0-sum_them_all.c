#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all it's parameters
 * @n: number of parameters
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i; sum = 0;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)

sum = += va_arg(args, unsigned int);

va_end(args);

return (sum);
}

