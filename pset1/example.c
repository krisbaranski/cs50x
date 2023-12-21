#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string q = get_string("Who are you? ");
    printf("Nice to meet you, %s\n", q); 
}