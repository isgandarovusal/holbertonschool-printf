#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    
    printf("Test 1: Simple sentence\n");
    len = _printf("Let's print a simple sentence.\n");
    printf("Printed %d chars\n\n", len);
    
    printf("Test 2: Character\n");
    len = _printf("%c\n", 'S');
    printf("Printed %d chars\n\n", len);
    
    printf("Test 3: String\n");
    len = _printf("%s\n", "Hello");
    printf("Printed %d chars\n\n", len);
    
    printf("Test 4: Percent\n");
    len = _printf("%%\n");
    printf("Printed %d chars\n\n", len);
    
    printf("Test 5: NULL string\n");
    len = _printf("%s\n", NULL);
    printf("Printed %d chars\n\n", len);
    
    return 0;
}
