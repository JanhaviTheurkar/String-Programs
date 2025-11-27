#include <stdio.h>
int main(){ char s[100],ch,o[100]; gets(s); scanf("%c",&ch);
int j=0; for(int i=0;s[i];i++) if(s[i]!=ch) o[j++]=s[i];
o[j]='\0'; puts(o); }
