
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WindowWidth 600
#define WindowLenght 400


typedef struct{
	int x;
	int y;
	}Coordonate;


//functiile in c vor fi folosite pentru a genera coordonate catre fillRectangle din C#


void AfisareCoordonatePatrat(Coordonate NV,Coordonate NE, Coordonate SV, Coordonate SE){

		printf("NV.x = %d si NV.y = %d\n",NV.x,NV.y);

		printf("NE.x = %d si NE.y = %d\n",NE.x,NE.y);

		printf("SV.x = %d si SV.y = %d\n",SV.x,SV.y);

		printf("SE.x = %d si SE.y = %d\n",SE.x,SE.y);

	}


void GeneratorCoordonatePatrat(){
	//patrat de 20x20 px
	int LeftUpCorner_x = rand() % (WindowWidth - 21); 
    int LeftUpCorner_y = rand() % (WindowLenght - 21); 

    if(LeftUpCorner_y <= 20){
		LeftUpCorner_y = 21;}

    Coordonate NV = {LeftUpCorner_x,LeftUpCorner_y};

    Coordonate NE = {NV.x + 20,NV.y};

    Coordonate SV = {LeftUpCorner_x,LeftUpCorner_y-20};

    Coordonate SE = {SV.x + 20,SV.y};


    AfisareCoordonatePatrat(NV,NE,SV,SE);

}



int main(){

	srand(time(NULL));





	GeneratorCoordonatePatrat();



	return 0; 
	}
