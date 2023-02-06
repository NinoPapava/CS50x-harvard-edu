//include libraries
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get user input
    string name = get_string("What is your name?\n");
    //print hello, user input
    printf("Hello, %s\n", name);
}