#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start ;
    do
    {
        start = get_int("Start size: ") ;
    }
    while (start < 9) ;

    // TODO: Prompt for end size
    int end ;
    do
    {
        end =get_int("End size: ");
    }
    while(end<start) ;

    // TODO: Calculate number of years until we reach threshold
    int n ;
    for (int i = 1 ; start < end ; i++)
    {
        start = start + start / 3 - start / 4 ;
        n = i;

    }

    // TODO: Print number of years
    printf("Years: %i\n", n);
}
