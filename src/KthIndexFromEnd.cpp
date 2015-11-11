/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	char *temp;
	int len = 0;
	temp = str;
	while (*temp++ != '\0')
	{
		len++;
	}
	if (K + 1 > len)
		return '\0';
	temp--;
	while (K != 0)
	{
		temp--;
		K--;
	}
	return *temp;

}