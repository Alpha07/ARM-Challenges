
// stack0.c
// Created by h0strix

#include <stdio.h>

int main(int argc, char *argv[]) {
    
    printf("Welcome to stack0! Your goal here is to modify a variable's value, good luck!\n\nGive me something: ");
    
    int value = 0;              // Variable we want to check
    char *buffer[16];           // Variable where we will store user's input
    gets((char *)buffer);       // Vulnerable function
    
    // Check for value's value
    if (value != 0) {
        
        printf("You have succesfully changed the variable 'value'!\n");     // Succes message
    } else {
        
        printf("Keep trying!\n");       // Fail message
    }
    
    return 0;
}
