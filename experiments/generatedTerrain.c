#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAP_WIDTH 60
#define MAP_HEIGHT 20

typedef enum {
    water,
    snow,
    dirt,
    grass,
    lava,
    stone
} tileType;

// Simple deterministic height function
int height(int tx, int ty) {
    return (tx * 13 + ty * 7) % 100;
}

// Simple deterministic temperature
int temperature(int ty) {
    return 100 - abs(ty - MAP_HEIGHT / 2) * 4;
}

// Decide tile type
tileType tile_tp(int tx, int ty) {
    int h = height(tx, ty);
    int temp = temperature(ty);

    if (h < 20) return water;
    if (h > 80) {
        if (temp < 30) return snow;
        return stone;
    }
    if (temp > 70) return dirt;
    if (temp < 30) return snow;

    return grass;
}

// Map display using characters
char tile_char(tileType t) {
    switch(t) {
        case water: return '~';
        case snow:  return '*';
        case dirt:  return '.';
        case grass: return '"';
        case lava:  return '^';
        case stone: return '#';
    }
    return '?';
}

int main() {
    for (int ty = 0; ty < MAP_HEIGHT; ty++) {
        for (int tx = 0; tx < MAP_WIDTH; tx++) {
            tileType t = tile_tp(tx, ty);
            printf("%c", tile_char(t));
        }
        printf("\n");
    }
    return 0;
}
