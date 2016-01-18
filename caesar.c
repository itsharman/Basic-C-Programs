#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//Harmanpreet Singh -- this program uses the caesar cipher to encrypt a string with a key

int main(int argc, char *argv[])
{
    //confirms that a correct amount of commandline arguments are inputted (should be only 2)
    if (argc != 2) {
        printf("You made a mistake! Try again!\n");
        return 1;
    }
    
    //declaring key
    int k = atoi(argv[1]);
    //getting input
    string input = GetString();
    
    //for-loop that goes on until it reaches the end of the string
    for (int i = 0; i < strlen(input); i++) {
        // if (input[i] > 64 && input[i] < 123) {
        //     input[i] += k;
        //     if (input[i] > 90 && input[i] < 97) input[i] -= 26;
        //     else if (input[i] > 122) input[i] -= 26;
        // } 
        //I tried using this code, and it worked for most part except for non-alphanumeric characters.
        //Then, I realized that isalpha, islower, and isupper make the code a lot more efficient so I redid the code.
        
        //checks if character is alphanumeric (only passes if true)
        if (isalpha(input[i])) {
            //checks if character is lower-case
            if (islower(input[i])) {
                //applies key and prints corresponding value
                printf("%c", ((input[i] + k - 97) %26) + 97);
            }
            //checks if character is upper-case
            if (isupper(input[i])) {
                //applies key and prints corresponding value
                printf("%c", ((input[i] + k - 65) %26) + 65);
            }
        }
        //doesn't apply key to non-alphanumeric characters, prints them unchanged
        else printf("%c", input[i]);
    }
    
    //prints new line for cleanliness
    printf("\n");
    //complements return 1 in line 13
    return 0;
}

//???? 
//PROFIT.