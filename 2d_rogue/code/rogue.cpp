#include <windows.h>
#include <stdio.h>


int sum(int x) {
    return x;
}

int sum(int x, int y) {
    return x+y;
}
int main(int nargs, char **args) {
    printf("sum 3: %d\n", sum(3));
    printf("sum 3 4: %d\n", sum(3,4));
}
