#include <stdio.h>
#include <string.h>
int main(){ char a[100],b[100]; gets(a); gets(b);
int c1[256]={0},c2[256]={0};
for(int i=0;a[i];i++) c1[a[i]]++;
for(int i=0;b[i];i++) c2[b[i]]++;
for(int i=0;i<256;i++) if(c1[i]!=c2[i]){ printf("No"); return 0; }
printf("Yes"); }
