#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints buffer in hexa
 * @argv: pointer array of argument
 * @argc: length of argument
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
int i;
int j = 0;

if (argc < 1)
printf("0\n");
if (argc > 0)
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
{
j = j + atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", j);
return (0);
}
