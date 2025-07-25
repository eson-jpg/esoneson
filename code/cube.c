#include <stdio.h>
#include <stdlib.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Cube: %d\n", num * num * num);
    system("pause");
    return 0;
}