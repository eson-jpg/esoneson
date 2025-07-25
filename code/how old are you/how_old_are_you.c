#include <stdio.h>
#include <stdlib.h>  // Required for system()

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    
    system("pause");  // Displays "Press any key to continue..."
    return 0;
}