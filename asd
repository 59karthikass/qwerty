#include<stdio.h>

main()
{
/* variable definition and initialization */
    char stringArray[100];

    printf("Please write something: \n");
    scanf("%s", stringArray);
    
    printf("You enter the string %s\n", stringArray);
    return 0; 
}
