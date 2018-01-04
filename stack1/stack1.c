
// stack0.c
// Created by h0strix

#include <stdio.h>

void call_me() {
    
    printf("You have changed code flow! Good job.\n");
}

int main(int argc, char *argv[]) {
    
    printf("Welcome to stack1! This time your goal is to change code flow. Good luck ;)\n");
    
    char *buff[16];
    
    printf("Input: ");
    gets((char *)buff);
    
    return 0;
}
