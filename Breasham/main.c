/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: edwin
 *
 * Created on 1 de mayo de 2023, 18:34
 */

#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "algoritmo.h"

/*
 * 
 */
//##Inicializamos el dibujo en el main
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    
    glutInitWindowPosition(50, 50);

    glutInitWindowSize(700, 700);
    
    glutCreateWindow("Bresenham Algoritmo");

    gluOrtho2D(0, 700, 0, 700);

    glutDisplayFunc(display);
    
    glutMainLoop();

    return 0;
}

