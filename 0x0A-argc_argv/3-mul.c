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
int j = 0;

if (argc > 1 && argc < 3)
{
i = atoi(argc[1]) * atoi(argv[2]);
printf("%d", i);
}
else
{
printf("Error\n");
return (1);
}
}
