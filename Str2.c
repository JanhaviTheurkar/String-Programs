#include <stdio.h>
struct Point { int x, y; };
int main() {
    struct Point p = {5, 7};
    printf("%d %d", p.x, p.y);
}
