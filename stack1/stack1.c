
// stack1.c
// Created by Snebot26

/*
 * compile: $(xcrun --sdk iphoneos --find clang) -isysroot $(xcrun --sdk iphoneos --show-sdk-path) --target=<target> -fno-stack-protector stack1.c -o <build path>/stack1
 * Examples for <target> -> armv7-apple-darwin11, arm64-apple-darwin
 */

#include <stdio.h>
#include <stdlib.h>

// Function we want to call. Target of the challenge
void call_me() {
    
    printf("You have successfully changed code flow! Good job!\n");
}

int main(int argc, char *argv[]) {
    
    printf("Welcome to stack1! Your goal is to change code flow, good luck!\n\nInput: ");
    
    unsigned int (*fp)();                // function pointer
    char *buffer[16];           // buffer variable where we will store user's input
    
    fp = 0;                     // Set fp to default_function
    
    gets((char *)buffer);       // Vulnerable function
    
    if (fp) {
        
        printf("Calling function pointer at: 0x%x\n", fp);
        fp();                   // Call fp
    }
    
    return 0;
}
