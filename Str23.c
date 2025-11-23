#include <stdio.h>
#include <ctype.h>
int main(){ char s[100],o[100]; gets(s); int j=0;
for(int i=0;s[i];i++) if(!isdigit(s[i])) o[j++]=s[i];
o[j]='\0'; puts(o); }
