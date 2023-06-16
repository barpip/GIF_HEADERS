#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#define FALSE 0
#define TRUE !FALSE

// Frame struct
typedef struct Frame
{
	char* name;
	unsigned int duration;
	char* path;
} Frame;

// Link (node) struct
typedef struct FrameNode
{
	Frame* frame;
	struct FrameNode* next;
} FrameNode;

/* 
Adds a new frame to the video.
Inputs:
- video: Pointer to the video 
- imagePath: Path of the image to be displayed
- duration: Time to display the frame in milliseconds
- frameName: Name of the frame
*/
void addFrame(FrameNode** video, char* imagePath, unsigned int duration, char* frameName);

/* 
Removes a frame from the video by its name
Inputs:
- video: Pointer to the video 
- frameName: Name of the frame to be removed
*/
void removeFrame(FrameNode** video, char* frameName);

/* 
Changes the duration of a frame in the video by its name.
Inputs:
- video: Pointer to the video (linked list of frames).
- frameName: Name of the frame to change its duration.
- newDuration: New duration in milliseconds.
*/
void changeFrameDuration(FrameNode* video, char* frameName, unsigned int newDuration);

/* 
Changes the duration of all frames in the video.
Inputs:
- video: Pointer to the video (linked list of frames).
- newDuration: New duration in milliseconds.
*/
void changeAllDurations(FrameNode* video, unsigned int newDuration);

/* 
Displays the details of all frames in the video.
Input:
- video: Pointer to the video (linked list of frames).
*/
void displayFrames(FrameNode* video);

/* 
Deletes the entire video and releases memory.
Input:
- video: Pointer to the video (linked list of frames).
*/
void deleteVideo(FrameNode** video);

#endif /* LINKEDLIST_H */