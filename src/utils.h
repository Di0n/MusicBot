#ifndef UTILS_H
#define UTILS_H
#ifndef __cplusplus
typedef unsigned char bool;
static const bool False = 0;
static const bool True = 1;
#endif

bool stringStartsWith(const char* pre, const char* str);
char* concatenateString(const char* str1, const char* str2);
char* substring(const char* str, const int index);
#endif
