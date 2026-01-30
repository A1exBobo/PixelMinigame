#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "coordinates.h"

void writeCoordinate(Shape s){
	FILE* f = fopen("../data/coordinates.txt","w+");
	if(f == NULL){
			printf("Nu s-a putut deschide fisierul.");
		}
	
	for (int i = 0; i < s.count; i++) {
			printf("x = %d y = %d\n", s.points[i].x, s.points[i].y);
			fprintf(f, "%d %d\n", s.points[i].x, s.points[i].y);
				
		}
	
	
	}



int main(){
	
    printf("Hello world!This is my game!");
    srand(time(NULL));
	
	
	Shape NewSquare = Square(20); //latura = 20 px
	writeCoordinate(NewSquare);
	FreeShape(&NewSquare);

	Shape NewWave2 = RandomWaves(580); //valuri de 120 puncte
	writeCoordinate(NewWave2);
	FreeShape(&NewWave2);
	



		
	return 0;
	}
