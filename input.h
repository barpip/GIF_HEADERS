#ifndef INPUT_H
#define INPUT_H

#include "LinkedList.h"

/* 
Gets a string input from the user.
Input:
- prompt: Prompt message for the user.
Output:
- Returns a dynamically allocated string containing the user's input.
*/
char* getStringInput(char* prompt);

/* 
Gets an integer input from the user.
Input:
- prompt: Prompt message for the user.
Output:
- Returns the integer value entered by the user.
*/
int getIntegerInput(char* prompt);

/* 
Gets a valid frame name input from the user.
Input:
- video: Pointer to the video (linked list of frames).
- prompt: Prompt message for the user.
Output:
- Returns a dynamically allocated string containing the user's input (valid frame name).
*/
char* getFrameNameInput(FrameNode* video, char* prompt);

#endif /* INPUT_H */