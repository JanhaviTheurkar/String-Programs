#include <stdio.h>
int main(){ char s[100],ch; gets(s); scanf("%c",&ch);
for(int i=0;s[i];i++) if(s[i]==ch){ memmove(&s[i],&s[i+1],strlen(&s[i])); break; }
puts(s); }
