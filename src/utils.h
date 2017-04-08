#ifndef UTILS_H
#define UTILS_H
#ifndef __cplusplus
typedef unsigned char bool;
static const bool False = 0;
static const bool True = 1;
#endif

#ifdef _WIN32
#include <Windows.h>
#endif

int stringStartsWith(const char* pre, const char* str);
char* concatenateString(const char* str1, const char* str2);
char* substring(const char* str, const size_t startIndex, const size_t endIndex);
void removeSpaces(char* str);
void removeSubstring(char* s, const char* remove);
LPCWSTR charToLPCWSTR(const char* s);

#endif
