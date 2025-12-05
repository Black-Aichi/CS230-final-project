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


        //outputs the decimal value of user's input
        printf("the decimal value is %d\n", int_val);

        //outputs the binary value of the user's input
        printf("the binary value %d%d%d%d\n", //this line outputs the binary value 
        (int_val >> 3) & 1, //'>>' shifts the leftmost bit all the way to the right, '& 1' keeps only the rightmost bit
        (int_val >> 2) & 1, //same as the one above but for the second leftmost bit
        (int_val >> 1) & 1, // same as the two above but for the second rightmost bit
        int_val & 1 
        );
        


    }
    return 0;
}

//epic project by Ace Stout and Dominick Smith 