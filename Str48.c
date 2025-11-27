#include <stdio.h>
#include <string.h>
int main(){ char s[200]; gets(s);
char *p=strtok(s," "),*small=p;
while(p){ if(strlen(p)<strlen(small)) small=p; p=strtok(NULL," "); }
puts(small); }
