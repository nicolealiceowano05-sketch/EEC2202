#include <stdio.h>
 
int main()
{
    char grade;
    printf(" enter your grade:");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'A':
        printf(" excellent\n");
        break;

        case 'B':
        printf(" good\n");
        break;

        case 'C':
        printf( "fair\n");
        break;

        case 'D':
        printf("you can do better\n ");
        break;

        case 'E':
        printf( " very bad\n");
        break;

        default:
        printf("Error, this is incorrect\n");
        break;
    }
    return 0;
    
}