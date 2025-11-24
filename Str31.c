#include <stdio.h>
#include <string.h>
int main(){ char s[100], sub[50]; gets(s); gets(sub);
printf(strstr(s, sub) ? "Found" : "Not Found"); }
