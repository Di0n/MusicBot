#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "utils.h"

bool stringStartsWith(const char* pre, const char* str)
{
	size_t lenpre = strlen(pre),
		lenstr = strlen(str);
	return lenstr < lenpre ? False : strncmp(pre, str, lenpre) == 0;
}

char* concatenateString(const char* str1, const char* str2)
{
	char* s = malloc(_scprintf("%s %s", str1, str2) + 1);
	sprintf(s, "%s %s", str1, str2);
	return s;
}

char* substring(const char* str, const int index)
{
	char* result = 0;
	size_t length = strlen(str);

	result = (char*)malloc(index+1);
	memcpy(result, str, index);
	result[index] = 0;
	return result;
}