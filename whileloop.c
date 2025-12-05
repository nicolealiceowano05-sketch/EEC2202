#include <stdio.h>
#include <stdlib.h>
int main()
{
    int correctpin = 1234;
    int userpin;
    printf("enter the pin:");
    scanf("%d", &userpin);
    while(getchar() != '\n');

    /*
    for(int i =0; i<3;++i)
    {
        if( userpin == correctpin)
        {
            printf("Access granted\n");
            break;
        }   
        else
        {
        printf("wrong pin, try again\n");
        scanf("%d", &userpin);
        }
 
    }
     */
    /* 
     int counter = 0;
     while( userpin != correctpin && counter < 2)
     {
        counter++;
        printf("wrong pin, try again\n:");
        scanf(" %d", &userpin);
     }
    */

    int counter = 0; 
    do {
        printf("wrong pin, try again\n:");
        scanf("%d", &userpin);
        counter++;
    }while(userpin != correctpin && counter < 2);

    


if(userpin== correctpin)
{
    printf("access granted\n");
}
else
{
    printf("Access denied too many attempts\n");
    return 101;
}



  return 0;

}