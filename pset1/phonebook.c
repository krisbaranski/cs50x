#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int age = get_int("How old are you? ");
    long pn = get_long("What's your phone number? ");
    
    printf("Here are my dates: \nMy name is %s, i'm %i years old and my phone number is %li \n", name, age, pn);
}