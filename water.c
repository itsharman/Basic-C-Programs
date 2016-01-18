#include <stdio.h>
#include <cs50.h>
//Harmanpreet Singh -- this program takes an input from the user (how many minutes they generally shower)
//and outputs the duration of the shower in minutes and the amount of water used in bottles.

int main(void)
{
    printf("For how many minutes do you generally shower?\n"); //asks the question
    int min = GetInt(); //gets input
    int btl = min*12; //calculates amount of water bottles used
    printf("minutes: %i \nbottles: %i \n", min, btl); //prints output
}