#include <stdio.h>
int main(){ char s[100]; gets(s); int c=0; for(int i=0;s[i];i++) if(s[i]==' ') c++; printf("%d",c); }
