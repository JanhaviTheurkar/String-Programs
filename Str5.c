#include <stdio.h>
struct Stu { char name[20]; };
int main() {
    struct Stu s = {"Amit"};
    printf("%s", s.name);
}
