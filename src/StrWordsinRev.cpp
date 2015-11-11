/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i=0, j=0,t=0;
	char temp;
	while (t != len / 2)
	{
		temp = *(input + t);
		*(input + t) = *(input + len - t-1);
		*(input + len - t - 1) = temp;
		t++;
	}
	i = j = t = 0;
	temp = 0;
	while (i!=len)
	{
		while ((*(input + i) != ' ')&&(i != len))
		{
			j++;
			i++;
		}
		while (t != j/2)
		{
			temp = *(input + i - t - 1);
			*(input +i-t-1) = *(input +i-(j-t));
			*(input + i - (j - t)) = temp;
			t++;
		}
		j = t = 0;
		if (i==len)
			break;
		i++;
	}
}
