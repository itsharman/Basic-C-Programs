#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//Harmanpreet Singh -- this program uses the vigenere cipher to encrypt a string with a key

int main(int argc, char *argv[])
{
    //confirms that a correct amount of commandline arguments are inputted (should be only 2)
    if (argc != 2) {
        printf("You made a mistake! Try again!\n");
        return 1;
    }
    
    //for-loop confirms that the input consists of only alphanumeric characters
    for (int i = 0, n = strlen(argv[1]); i < n; i++) {
        if (!isalpha(argv[1][i])) {
            printf("You made a mistake! Try again!\n");
            return 1;
        }
    }
    
    //initializing variables
    string key = argv[1];
    //using this counter to compensate for spaces
    int offset = 0;
    //gets string input
    string input = GetString();
    
    //for-loop that goes on until it reaches the end of the string
    for (int i = 0; i < strlen(input); i++) {
        //checks for spaces in the input statement
        if (!isalpha(input[i])){
            //doesn't cipher spaces
            printf("%c", input[i]);
            offset++;
            //moves onto the next cycle of i
            continue;
        }
     
        //creates the rotator so that the next letter of the key is used every cycle
        //repeats key if key is shorter than string input
        int index = (i - offset) % strlen(key);
        int rotator = key[index];
    
        //corrects rotator value for upper and lower case values
        if (islower(key[index])) rotator -= 97;
        else if (isupper(key[index])) rotator -= 65;
        
        //checks if ith character is alphanumeric
        if (isalpha(input[i])) {
            //checks if ith character is lowercase
            if (islower(input[i])) {
            //applies rotator key and calculates and prints correct letter
            printf("%c", ((input[i] + rotator - 97) %26) + 97);
            }
            //checks if ith character is lowercase
            if (isupper(input[i])) {
            //applies rotator key and calculates and prints correct letter
            printf("%c", ((input[i] + rotator - 65) %26) + 65);
            }
        }
        //prints non-alphanumeric characters
        else printf("%c", input[i]);
    }
    //prints new line for clean look
    printf("\n");
    //complements return 1 in line 13
    return 0;
}

//???? 
//PROFIT.
