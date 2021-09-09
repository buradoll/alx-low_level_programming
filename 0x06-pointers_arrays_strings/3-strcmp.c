/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0' || *s2 != '\0') {
if (*s1 == *s2) {
s1++;
s2++;
}
else if ((*s1 == '\0' && *s2 != '\0')
|| (*s1 != '\0' && *s2 == '\0') || (*s1 != *s2)
{
flag = 1;
}
}
