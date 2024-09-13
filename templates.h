#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

// Clears the screen based on the operating system
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Waits for the user to press Enter
void waitForUser() {
    printf("Press Enter to continue...\n");
    getchar();
}

// Generates a random number between min and max
void generateRandomNumber(int min, int max) {
    srand(time(0));
    int num = (rand() % (max - min + 1)) + min;
    printf("Random Number: %d\n", num);
}

// Pauses the program for a specified number of seconds
void pauseProgram(int seconds, int show) {
    if (show == 1) {
	    printf("Pausing for %d seconds...\n", seconds);
	    sleep(seconds);
    } else {
	    sleep(seconds);
    }
}

// Prints a line of dashes
void printLine() {
    printf("------------------------------\n");
}

// Converts a string to uppercase
void toUpperCase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

#endif

