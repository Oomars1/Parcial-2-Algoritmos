/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * este es el algoritmo de bresham sin ningun tipo de utilizzacion de grafos
 */

#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

/*
 * 
 */
void drawLine(int x1, int y1, int x2, int y2, int** pixels) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = x1 < x2 ? 1 : -1;
    int sy = y1 < y2 ? 1 : -1;
    int err = dx - dy;
    int x = x1;
    int y = y1;

    while (x != x2 || y != y2) {
        pixels[x][y] = 1;
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x += sx;
        }
        if (e2 < dx) {
            err += dx;
            y += sy;
        }
    }
}

int main(int argc, char** argv) {
    int** pixels;
    int width = 10;
    int height = 10;
    pixels = (int**)malloc(width * sizeof(int*));
    for (int i = 0; i < width; i++) {
        pixels[i] = (int*)malloc(height * sizeof(int));
        for (int j = 0; j < height; j++) {
            pixels[i][j] = 0;
        }
    }

    drawLine(1, 1, 8, 8, pixels);

    for (int j = 0; j < height; j++) {
        for (int i = 0; i < width; i++) {
            printf("%d ", pixels[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < width; i++) {
        free(pixels[i]);
    }
    free(pixels);

    return 0;
}

