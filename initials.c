#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//Harmanpreet Singh -- this program prints the initials of the user's inputted name 

int main(void)
{
    //gets string input
    string name = GetString();
    //makes first letter of string uppercase (first initial)
    char initial = toupper(name[0]);
    //prints first initial
    printf("%c", initial);
    
    //for-loop that goes on until it reaches the end of the string
    for (int i = 0; i < strlen(name); i++) {
        //checks for ends of words & beginnings of new words in string for initials
        if (name[i] == ' ') {
            //updates variable initial upon finding new initials
            initial = toupper(name[i+1]);
            //prints initial
            printf("%c", initial);
            //repeat for more initials, if any
        }
    }
    //prints new line for cleaner look
    printf("\n");
}

//???? 
//PROFIT.