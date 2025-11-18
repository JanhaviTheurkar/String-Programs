#include <stdio.h>
struct Num { int n; };
int main() {
    struct Num a[3] = {{1},{2},{3}};
    for(int i=0;i<3;i++) printf("%d ", a[i].n);
}
