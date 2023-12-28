#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Prompt for start size

    int start;
    do
    {
        start = get_int("Start size: ");
    } while (start < 9);

    // TODO: Prompt for end size

    int end;
    do
    {
        end = get_int("End size: ");
    } while (start > end);

    // TODO: Calculate number of years until we reach threshold

    int years = 0;

    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }

    // TODO:Pprint number of years

    printf("Years: %i\n", years);
}