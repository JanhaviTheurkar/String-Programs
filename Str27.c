#include <stdio.h>
#include <string.h>
int main(){ char s[100]; gets(s); printf("%c", s[strlen(s)-1]); }
