#include <stdio.h>
#include <string.h>
int main(){ char s[100],ch; gets(s); scanf("%c",&ch);
int n=strlen(s); s[n]=ch; s[n+1]='\0'; puts(s); }
