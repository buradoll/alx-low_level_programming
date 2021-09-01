# include <stdio.h>
/**
 * main - check the code for ALX School students.
 * Return: void.
 */
int main(void)
{
int c;
_isalpha(c);
return;
}
int _isalpha (int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
