/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char* removeSpaces(char *str) {
	char *temp;
	int count = 0;
	temp = str;
	while (*temp != '\0')
	{
		if (*temp == ' ')
		{
			temp++;
			count++;
			continue;
		}
		*(temp - count) = *(temp);
		temp = temp + 1;
	}
	*(temp - count) = '\0';
	return temp;
}