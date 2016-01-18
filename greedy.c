#include <stdio.h>
#include <cs50.h>
#include <math.h> 
//Harmanpreet Singh -- this program returns the lowest amount of coins possible for an inputted amount of money

double round(double x); //introduces the round function

int main(void)
{
    
    //initializes variables
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0, change;
    
    printf("How much change is owed? "); //asks question
    
    //takes an input from the user and converts it into cents
    do {
        change = round(GetFloat()*100); //rounds decimals into integer
        if (change < 0) printf("Retry: "); 
    } while (change < 0); //verifies that the user inputs a valid entry (positive number)
    
    //if no change is inputted, then outputs "No change necessary!"
    if (change == 0) printf("No change necessary!\n");
    
    //does all the calculations (change is modified and reduced every time to ensure that program works correctly)
    else {
        quarters = change / 25;
        change = change % 25;
        dimes = change/ 10;
        change = change % 10;
        nickels = change / 5;
        change = change % 5;
        pennies = change / 1;
    // printf("Quarters: %d\nDimes: %d\nNickels: %d\nPennies: %d\nTotal Coins: %d\n", quarters, dimes, nickels, pennies, quarters + dimes + nickels + pennies);
    printf("%d\n", quarters + dimes + nickels + pennies); //prints output
    }
    
}