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

// Print date (different formats)

void printDate(int format) {
	time_t t = time(NULL);
    		struct tm *currentTime = localtime(&t);

		if (format == 1) {

    		// Format 1: YYYY-MM-DD HH:MM:SS
    		printf("Format 1: %04d-%02d-%02d %02d:%02d:%02d\n",
           		currentTime->tm_year + 1900, currentTime->tm_mon + 1, currentTime->tm_mday,
           		currentTime->tm_hour, currentTime->tm_min, currentTime->tm_sec);
		}

		if (format == 2) {

    		// Format 2: DD/MM/YYYY HH:MM:SS
    		printf("Format 2: %02d/%02d/%04d %02d:%02d:%02d\n",
           		currentTime->tm_mday, currentTime->tm_mon + 1, currentTime->tm_year + 1900,
           		currentTime->tm_hour, currentTime->tm_min, currentTime->tm_sec);
		}

		if (format == 3) {

    		// Format 3: Month DD, YYYY HH:MM:SS
    		char months[12][10] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    		printf("Format 3: %s %02d, %04d %02d:%02d:%02d\n",
           		months[currentTime->tm_mon], currentTime->tm_mday, currentTime->tm_year + 1900,
           		currentTime->tm_hour, currentTime->tm_min, currentTime->tm_sec);

		}
}


#endif

