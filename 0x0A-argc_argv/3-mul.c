#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints buffer in hexa
 * @argv: pointer array of argument
 * @argc: length of argument
 *
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
int i;

i = atoi(argv[1]) * atoi(argv[2]);
if (argc == 3)
{
printf("%d\n", i);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
