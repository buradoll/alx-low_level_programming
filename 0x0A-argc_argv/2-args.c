#include <stdio.h>
/**
 * main - prints buffer in hexa
 * @argv: pointer array of argument
 * @argc: length of argument
 *
 * Return: No return.
 */
int main(int argc, char *argv[])
{
int i = 0;

while (i <= argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
