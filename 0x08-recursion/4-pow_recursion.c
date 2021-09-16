/**
 * _pow_recursion - check the code
 * @x: int parameter
 * @y: int parameter
 * Return: result.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x,y-1));
}
