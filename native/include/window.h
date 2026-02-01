#ifndef WINDOW_H
#define WINDOW_H

typedef struct {
    int WindowXsize;
    int WindowYsize;
} Window;

extern Window currentWindow;  //defult window size 0x0

void SetWindowSize(int length,int height);


#endif
