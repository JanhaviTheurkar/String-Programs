#include <stdio.h>
#include <string.h>
int main(){ char s[200]; gets(s);
char *p=strtok(s," "),*big=p;
while(p){ if(strlen(p)>strlen(big)) big=p; p=strtok(NULL," "); }
puts(big); }
