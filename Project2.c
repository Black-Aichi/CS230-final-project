#include <stdio.h>

int main(){
    char input = 0  ;
    while(input != 'x'){
        printf("Enter a Hexadecimal digit (or 'x' to exit): ");
        scanf(" %c", &input);

        if (input == 'x'){
            break;
        }

        int int_val;

        if (input >= '0' && input <= '9'){
            int_val = input -'0';
        }
        else if (input >='A' && input <= 'F'){
            int_val = input -'A'+ 10;
        }
        else if (input >= 'a' && input <= 'f'){
            int_val = input -'a' + 10;
        }
        else{
            printf("Invalid hexadecimal value.\n");
            continue;
        }

        printf("the value is %d\n", int_val);


    }
    return 0;
}