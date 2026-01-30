#include "tiles.h"  
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#define side 100       //each tile has 100px width and height 



int height(int tx, int ty) {
    return (tx * 13 + ty * 7) % 100;  // pseudo-random but deterministic
}

int temperature(int ty) {
    return 100 - abs(ty - 50) * 2;  // colder toward top & bottom
}



tileType tile_tp(int tx, int ty) {
    int h = height(tx, ty);
    int temp = temperature(ty);

   if (h < 20) return water;

    if (h > 80) {
        if (temp < 30) return snow;
        return stone;
    }

    if (temp > 70) return dirt;   // hot → dry land
    if (temp < 30) return snow;

    return grass;
}

	
