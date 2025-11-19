
/**
 * op_add - addition
 * @a: name of the person
 * @b: name of the person
 * Return: addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: name of the person
 * @b: name of the person
 * Return: Subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: name of the person
 * @b: name of the person
 * Return: Multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: name of the person
 * @b: name of the person
 * Return: Division.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (-1);
}
/**
 * op_mod - modulo
 * @a: name of the person
 * @b: name of the person
 * Return: Modulo.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (-1);
}
