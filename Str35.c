#include <stdio.h>
#include <string.h>
int main(){ char s[100]; gets(s);
memmove(s, s+1, strlen(s)); puts(s); }
