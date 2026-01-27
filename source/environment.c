#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "coordinates.h"





int main(){
	
    printf("Hello world!This is my game!");
    srand(time(NULL));
	
	
	FILE* fisier;
	Shape NewSquare = Square(20); //latura = 20 px
	
	
	
	fisier = fopen("Minigame/PyScripts/coordinates.txt","w+");
	if(fisier == NULL){
			printf("Nu s-a putut deschide fisierul.");
			return 1;
		}
	
	for (int i = 0; i < NewSquare.count; i++) {
			printf("x = %d y = %d\n", NewSquare.points[i].x, NewSquare.points[i].y);
			fprintf(fisier, "%d %d\n", NewSquare.points[i].x, NewSquare.points[i].y);
				
		}




	FreeShape(&NewSquare);	
	return 0;
	}
