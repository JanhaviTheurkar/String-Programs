#include <stdio.h>
#include <string.h>
int main(){ char s[100]; gets(s);
int freq[256]={0};
for(int i=0;s[i];i++) freq[(unsigned)s[i]]++;
for(int i=0;i<256;i++) if(freq[i]>1) printf("%c=%d ",i,freq[i]);
}
