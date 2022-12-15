#include "main.h"
/**
* main - checks for alphabetic character.
* Return :c is 1 for alphabets and 0 for otherwise
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
