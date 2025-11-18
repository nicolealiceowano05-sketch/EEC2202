#include <stdio.h>

int main() {

    char array[50];
    printf("enter a string:");
    fgets(array, sizeof(array), stdin);
    printf("you entered: %s\n", array);
    return 0;

git 
}