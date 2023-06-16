#ifndef OUTPUT_H
#define OUTPUT_H

/* 
Prints the menu options to the screen.
*/
void printMenu();

/* 
Displays a message to the user.
Input:
- message: Message to be displayed.
*/
void showMessage(char* message);

/* 
Displays an error message for invalid input.
*/
void showInvalidInputError();

#endif /* OUTPUT_H */
