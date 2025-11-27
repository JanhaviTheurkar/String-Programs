
#include <stdio.h>
#include <string.h>
int main(){
    char s[200]; gets(s);
    char *p=strtok(s," ");
    while(p){ strrev(p); printf("%s ",p); p=strtok(NULL," "); }
}
