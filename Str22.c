#include <stdio.h>
#include <ctype.h>
int main(){ char s[100]; gets(s); int c=0;
for(int i=0;s[i];i++) if(islower(s[i])) c++; printf("%d",c); }
