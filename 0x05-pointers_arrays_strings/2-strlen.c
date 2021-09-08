/**
 * _strlen - function for length of string
 *@len length of string
 *@s- string parameter
 * Return: return len.
 */
int _strlen(char *s)
{
int len = 0;

while(*(s+len))
len++;
return(len);
}
