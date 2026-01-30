#ifndef COORDINATES_H
#define COORDINATES_H

#include <stddef.h>

typedef struct{
	int x;
	int y;
	}Coordonate;
	
typedef struct{
	Coordonate *points;
	size_t count;
	}Shape;
	
void FreeShape(Shape* s);

Shape Square(double size);
Shape RandomWaves(size_t samples);

#endif
