#include <stdio.h>

int main(){
    char input ;
    while(input != 'x'){
        printf("Enter a Hexadecimal digit (or 'x' to exit): ");
        scanf(" %c", &input);
        int int_val = input - '0';
        printf("the value is %d\n", int_val);
    }
    

    return 0;
}