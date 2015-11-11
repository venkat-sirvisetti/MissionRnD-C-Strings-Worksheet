/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int i=0, j=0,t=0;
	char temp;
	strrev(input);
	while (*(input + i) != '\0')
	{
		while (*(input + i) != ' '||(input + i) != '\0')
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
		if (*(input + i) == '\0')
			continue;
		i++;
	}
}
