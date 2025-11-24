#include <stdio.h>
#include <string.h>
int main(){ char s[200], sub[50]; gets(s); gets(sub);
char *p=strstr(s,sub);
if(p){ memmove(p, p+strlen(sub), strlen(p+strlen(sub))+1); }
puts(s); }
