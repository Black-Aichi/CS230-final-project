#include <stdio.h>

int main(){
    char input = 0;
    while(input != 'x'){
        printf("Enter a Hexadecimal digit (or 'x' to exit): ");
        scanf(" %c", &input);

        //if 'x' is inputed it cleanly breaks from the while loop
        if (input == 'x'){
            break;
        }

        //initializing the int_val variable
        int int_val;

        if (input >= '0' && input <= '9'){
            int_val = input -'0';
        } //checks if input is between 0 and 9, if so it returns the value back to int_val
        else if (input >='A' && input <= 'F'){
            int_val = input -'A'+ 10;
        } //checks if input is between 'A' and 'F', if so it subtracts the input value by 'A' and adds 10
        else if (input >= 'a' && input <= 'f'){
            int_val = input -'a' + 10;
        }//checks if input is between 'A' and 'F', if so it subtracts the input value by 'a' and adds 10
        // 'A' or 'a' is subtracted because in Ascii 'A' = 65 so by subtracting that from the input and adding 10 it gives you the correct integer value :)
        else{
            printf("Invalid hexadecimal value.\n");
            continue;
        } //if an invalid input is entered, it outputs the above statement and then returns to the beginning of the loop. 


        //outputs the integer value of user's input
        printf("the value is %d\n", int_val);
        


    }
    return 0;
}

//epic project by Ace Stout and Dominick Smith 