#include <stdio.h>
#include <string.h>
int main(){ char s[100], ch; gets(s); scanf("%c",&ch);
memmove(s+1,s,strlen(s)+1); s[0]=ch; puts(s); }
