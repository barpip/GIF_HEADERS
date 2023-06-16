	#ifndef FILEIO_H
#define FILEIO_H

#include "LinkedList.h"

/* 
Saves the video to a file.
Inputs:
- video: Pointer to the video (linked list of frames).
- filePath: Path of the file to save the video.
*/
void saveVideoToFile(FrameNode* video, char* filePath);

/* 
Loads a video from a file.
Input:
- filePath: Path of the file to load the video.
Output:
- Returns a pointer to the loaded video (linked list of frames).
*/
FrameNode* loadVideoFromFile(char* filePath);

#endif /* FILEIO_H */
