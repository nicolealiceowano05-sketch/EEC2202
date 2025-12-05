#include <stdio.h>

int main()
{
 int correctpin=4321;
 int userpin;
 printf("enter the pin:");
 scanf("%d",&userpin);
 
if(userpin == correctpin)
{
    printf("______MENU____\n");
printf("1.Door lock\n 2.Change pin \n 3. View logs\n 4. EXIT\n");
scanf("%d", &userpin);
switch(userpin)
{
    case 1: printf("Door already unclocked\n"); break;
    case 2: printf("Feature coming soon\n"); break;
    case 3: printf("Feature coming soon\n"); break;
    case 4: printf("Thank you\n"); break; 
    default: printf("Invalid option\n"); break;

}
printf( "access granted,door unlocked");  
}
else if( correctpin < 1000)
{
printf(" the pin is too short");
}
else if( correctpin >9999 )
{
printf("the pin is too long");

}
else{
    printf("pin is invalid");
} 
return 0;
} 