#include <stdio.h>
#include <string.h>
int main(){ char s[200], sub[50]; gets(s); gets(sub);
int c=0; char *p=s;
while((p=strstr(p, sub))){ c++; p++; }
printf("%d",c); }
