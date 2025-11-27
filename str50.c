#include <stdio.h>
int main(){ char s[100],a,b; gets(s); scanf(" %c %c",&a,&b);
for(int i=0;s[i];i++) if(s[i]==a) s[i]=b; puts(s); }
