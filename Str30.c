#include <stdio.h>
#include <ctype.h>
int main(){ char s[100]; gets(s);
for(int i=0;s[i];i++)
    if(i==0 || s[i-1]==' ') s[i]=toupper(s[i]);
puts(s); }
