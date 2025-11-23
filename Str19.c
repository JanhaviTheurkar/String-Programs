#include <stdio.h>
int main(){ char s[100],o[100]; gets(s); int j=0; for(int i=0;s[i];i++) if(strchr("aeiouAEIOU",s[i])) o[j++]=s[i]; o[j]='\0'; puts(o); }
