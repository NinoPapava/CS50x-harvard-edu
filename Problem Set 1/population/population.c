//include libraries
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt for start size
    int start;
    do
    {
        start = get_int("Starting Population: ");
    }
    while (start < 9);

    //Prompt for and size
    int end;
    do
    {
        end = get_int("Ending Population: ");
    }
    while (start > end);

    //Calculate number of years until we reach threshold
    int year = 0;
    do
    {
        start = start + (start / 3) - (start / 4);
        year++;
    }
    while (start < end);

    //Print number of years
    printf("Years: %i\n", year);
}