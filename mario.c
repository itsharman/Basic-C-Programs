#include <stdio.h>
#include <cs50.h>
//Harmanpreet Singh -- this program prints a half-pyramid (like the one in the first level of the original Mario)
//where the height and width depends on the user's input.

// void say (string indent, int height) {
//     for (int i = 0; i < height; i++) {
//         printf("%s", indent);
//     }
// }

int main(void)
{
    //initializes variables
    int height;
    string hashtag = "#";
    string space = " ";
    
    printf("What is the half-pyramid's height? "); //asks questions
    
    //verifies that the user's input is acceptable (positive integer less than or equal to 23)
    do {
        height = GetInt();
        if (((height > 23) || (height < 0))) printf("Retry: ");
    } while ((height > 23) || (height < 0));
    
    //prints the pyramid row by row using two for-loops
    for (int i = 0; i < height; i++) {
        for (int a = height - 1 - i; a > 0; a--) printf("%s", space); //prints the empty spaces based on the height and ith term
        for (int b = 0; b <= i; b++) printf("%s", hashtag); //prints the hashtags based on the ith term
        printf("%s\n", hashtag); //prints the extra column to satisfy the Mario look
    }

}