#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    char str[] = "Hello Brian";
    
    long int l = UINT_MAX;
    l += 1024;
    len = _printf("%x\n", l);
    len2 = printf("%x\n", l);
    fflush(stdout);
    if (len != len2)
    {
    	printf("Lengths differ.\n\n");
	fflush(stdout);
    } 
  
    len = _printf("%!\n");
    len2 = printf("%!\n");
    fflush(stdout);
    if (len != len2)
    {
		printf("Lengths differ.\n\n");
		fflush(stdout);
    }

    _printf("\nGOT: %R\n", "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.");

    _printf("\nEXPECTING: EBG13 (\"ebgngr ol 13 cynprf\", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.\n\n");
    _printf("Non Printable:  %S\n", "Best\nSchool");
    _printf("Binary: %b\n", 98);
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Reverse string:[%r]\n", str);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
