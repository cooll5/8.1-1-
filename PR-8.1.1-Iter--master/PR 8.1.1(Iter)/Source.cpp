#include <iostream>
#include "Source.h"

using namespace std;

int Count(const char* substr, const char* str, int j, int k)
{
	for (int i = 0; substr[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (str[j] != '\0')
		{
			if (substr[k] == str[j] && substr[k] != '\0')
			{
				j++;
				k++;
			}
			else
				break;
		}
		if (str[j] == '\0')
			return true;
	}
	return false;
}
int main()
{
	char* pdest;
	int result;
	char substr[] = "abc";
	char str[] = "Repeat abc";

	cout << "String to be searched:" << endl << " " << str << endl;
	pdest = strstr(str, substr);
	result = (int)(pdest - str + 1);
	if (pdest != NULL)
		cout << substr << " found at position " << result << endl;
	else
		cout << substr << " not found" << endl;
	return 0;
}

