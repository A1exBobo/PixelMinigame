#ifndef TILE_H
#define TILE_H

// Tile width/height (optional, for reference)
#define TILE_SIZE 100

// Tile type enum
typedef enum {
    water,
    snow,
    dirt,
    grass,
    lava,
    stone
} tileType;

// Functions to generate terrain
int height(int tx, int ty);
int temperature(int ty);
tileType tile_tp(int tx, int ty);

#endif // TILE_H

