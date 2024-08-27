//USAGE:
//
//Open your project, and add in the beggining #include "templates", then just call functions from this file by entering something in a kind of 'clearScreen();'
//

#ifndef GAME_H
#define GAME_H



void clearScreen(){
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void waitForUser(){
	printf("Press Enter to continue...\n");
	getchar();
}


#endif
