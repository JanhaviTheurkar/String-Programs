#include <stdio.h>
#include <string.h>
int main(){ char s[100],r[100]; gets(s); strcpy(r,s); strrev(r); printf(strcmp(s,r)==0?"Palindrome":"Not Palindrome"); }
