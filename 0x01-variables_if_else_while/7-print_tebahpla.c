#include <stdio.h>

/**
 * main - prints  the alphabet in lowercase in reverse,
 *  followed by a new line.
 * Return: always 0
 */
int main(void)
{
int alp;
for (alp = 122; alp >= 97; alp--) /*ascii code for alphabets*/
{
putchar(alp);

}
putchar(10); /*acsii code for new line*/

return (0);
}
