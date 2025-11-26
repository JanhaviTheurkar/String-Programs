#include <stdio.h>
#include <string.h>
int main(){ char s[100]; gets(s);
s[strlen(s)-1]='\0'; puts(s); }
