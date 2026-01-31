#include "../include/window.h"

// Declare the global window size
Window currentWindow = {0, 0};  // Initialize with default values

// Function to set the window size
void SetWindowSize(int length, int height) {
    currentWindow.WindowXsize = length;
    currentWindow.WindowYsize = height;
}
