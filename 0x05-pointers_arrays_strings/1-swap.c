/**
 * swap_int - check the code
 *@t: save value of a
 *@a: main variable
 *@b: main variable
 *@g save value of b
 */
void swap_int(int *a, int *b)
{
int t = *a;
int g = *b;

*b = t;
*a = g;
}
