#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "utils.h"

int stringStartsWith(const char* pre, const char* str)
{
	return (strncmp(pre, str, strlen(str)) == 0) ? 1 : 0;
}

char* concatenateString(const char* str1, const char* str2)
{
	char* s = malloc(_scprintf("%s %s", str1, str2) + 1);
	sprintf(s, "%s %s", str1, str2);
	return s;
}

char* substring(const char* str, const size_t startIndex, const size_t endIndex)
{
	size_t length = (endIndex - startIndex) + 1;
	char* dest = (char*)malloc(length);
	strncpy(dest, str + startIndex, length);
	dest[length] = '\0';
	return dest;
}

void removeSubstring(char *s, const char *remove)
{
	size_t length = strlen(remove);
	while (s = strstr(s, remove))
		memmove(s, s + length, 1 + strlen(s + length));
}
//char* substring(const char* str, const int index)
//{
//	char* result = 0;
//	size_t length = strlen(str);
//
//	result = (char*)malloc(index+1);
//	memcpy(result, str, index);
//	result[index] = 0;
//	return result;
//}

//char* substring(const char* str, const char* subStr)
//{
//	char* result = strstr(str, subStr);
//	int pos = result - str;
//	int subStrLen = strlen(str) - pos;
//}

void removeSpaces(char* str)
{
	char* i = str;

	while (*str != 0)
	{
		*i = *str++;
		if (*i != ' ')
			i++;
	}
	*i = 0;
}