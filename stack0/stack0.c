
// stack0.c
// Created by Snebot26

/*
 * compile iOS: $(xcrun --sdk iphoneos --find clang) -isysroot $(xcrun --sdk iphoneos --show-sdk-path) --target=<target> -fno-stack-protector stack0.c -o <build path>/stack0
 * Examples for <target> -> armv7-apple-darwin11, arm64-apple-darwin
 */

/*
 * compile on Raspberry Pi: gcc stack0.c -fno-stack-protector -o stack0
 */

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
