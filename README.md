# PixelMinigame

I made this minigame to improve my C and C# programming and understanding skills.
---

## How It Works

- **C engine** generates `(x, y)` coordinates for game objects.  
- **C# renderer** draws those points at 60 FPS (currently using `FillRectangle`).  
- **Python script** helps visualize the points before they hit the screen.  


---

## Features

- Real-time point generation in C.  
- Smooth 60 FPS rendering in C#.  
- Python visualization script for testing and debugging.  
- Modular design that keeps logic and rendering separate.

---

## Getting Started

### Requirements

- C compiler (GCC/Clang/MSVC)  
- .NET (for the C# project)  
- Python 3 (optional, for visualization)

### Setup

1. Compile the C source files into a shared library (`.dll` or `.so`).  
2. Reference the compiled library in the C# project.  
3. Build and run the C# project to see the points move.  
4. (Optional) Run `visualize_points.py` to check your coordinates visually.

---

## Project Structure

