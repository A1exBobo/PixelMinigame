
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "../include/coordinates.h"
#define WindowXsize 600
#define WindowYsize 400


void FreeShape(Shape* s) {
    if (s->points) {
        free(s->points);
        s->points = NULL;  // good practice
        s->count = 0;
    }
}




Shape Square(double size){
	
	
	Shape s;
	s.count = 4;
	s.points = malloc(s.count * sizeof(Coordonate));
	
	if (!s.points) {
        s.count = 0;
        return s;
    }
    
    if (size >= WindowXsize || size >= WindowYsize) {
    s.count = 0;
    return s;
    
    
}

	
	
	
	int LeftUpCorner_x = rand() % (WindowXsize - ((int)size+1)); 
    int LeftUpCorner_y = rand() % (WindowYsize - ((int)size+1)); 

    if(LeftUpCorner_y <= size){
		LeftUpCorner_y = size+1;}

    s.points[0] = (Coordonate){LeftUpCorner_x, LeftUpCorner_y};                 // NV
    s.points[1] = (Coordonate){LeftUpCorner_x + size, LeftUpCorner_y};          // NE
    s.points[2] = (Coordonate){LeftUpCorner_x, LeftUpCorner_y - size};          // SV
    s.points[3] = (Coordonate){LeftUpCorner_x + size, LeftUpCorner_y - size};   // SE


    
    
    return s;
    
     

}

Shape RandomWaves(size_t samples) {
    Shape s;
    s.count = samples;
    s.points = malloc(samples * sizeof(Coordonate));

    if (!s.points) {
        s.count = 0;
        return s;
    }

    double A = rand() % (WindowYsize - WindowYsize/2);
    double w = 0.009;
    double e = 0;
    int rectification = WindowYsize / 2;

    for (size_t t = 0; t < samples; t++) {
        double y = A * sin(w * t + e) + rectification;
        s.points[t] = (Coordonate){ (int)t, (int)y };
    }

    return s; 
}



