#include <stdio.h>
#include <ctype.h>
int main(){ char s[100]; gets(s);
s[0]=toupper(s[0]); puts(s); }
