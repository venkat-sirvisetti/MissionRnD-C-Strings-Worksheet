/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str, int afterdecimal){
	int i, j = 0;
	float f;
	if (number<0)
	{
		str[0] = '-';
		number *= -1;
	}
	i = (int)number;
	f = number - i;
	while (i != 0)
	{
		j = j + i % 10;
		j = j * 10;
		i = i / 10;
	}
	j = j / 10;
	i = 0;
	if (str[0] == '-')
		i = 1;
	while (j != 0)
	{
		*(str + i) = j % 10 + '0';
		j = j / 10;
		i++;
	}
	*(str+i) = '.';
	while (afterdecimal-- != 0)
	{
		f = f * 10;
		j = (int)f;
		i++;
		*(str + i) = j % 10 + '0';
		f = f - j;
	}
	
}
