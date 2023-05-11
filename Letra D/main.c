/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: edwin
 *
 * Created on 3 de mayo de 2023, 16:29
 */

#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MAX_PIXELS 9000

typedef struct {
    int x;
    int y;
} Pixel;

Pixel filledPixels[MAX_PIXELS];
int filledPixelsCount = 0;

void setPixel(int x, int y, GLfloat color[3]) {
    filledPixels[filledPixelsCount].x = x;
    filledPixels[filledPixelsCount].y = y;
    filledPixelsCount++;

    glColor3fv(color);
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
    glFlush();
}

void floodFill(int x, int y, GLfloat fillColor[3], GLfloat targetColor[3]) {
    GLfloat pixelColor[3];
    glReadPixels(x, y, 1, 1, GL_RGB, GL_FLOAT, pixelColor);

    if (pixelColor[0] != targetColor[0] || pixelColor[1] != targetColor[1] || pixelColor[2] != targetColor[2]) {
        return;
    }

    setPixel(x, y, fillColor);

    floodFill(x + 1, y, fillColor, targetColor);
    floodFill(x - 1, y, fillColor, targetColor);
    floodFill(x, y + 1, fillColor, targetColor);
    floodFill(x, y - 1, fillColor, targetColor);
}

void drawD() {
     glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(255,191,0); // Establece el color del lápiz en dorado
   // glColor3f(0, 0, 0);
    glPointSize(3); // Establece el tamaño del lápiz
    //drawD(); // Dibuja la letra D

    glFlush();
    /*
            line(0,380 , 700 , 380);
            line(0,320 , 700 , 320);
     */
    //-----------------------------------------------------------------------------Letra D INICIA
    // Dibuja la línea horizontal superior de la letra D
    line(11, 370, 11, 330);
    //parte grande
    // Dibuja la curva derecha de la letra D
    circuloPos(18, 350, 30, -100, 100);
    //parte pequenia
    // Dibuja la curva derecha de la letra D
    circuloPos(23, 350, 15, -95, 95);

    // Dibuja la línea horizontl al medioo
    line(20, 335, 20, 365);
    //decorcion superior
    circuloPos(11, 375, 5, 90, 270);
    //decoracion inferior
    circuloPos(11, 325, 5, 90, 275);
    /*
        glPointSize(3); // Establece el tamaño del lápiz
     */
    //-----------------------------------Letra D TERMINA
    /////-------------------------------------------------- LETRA I

    // Dibuja la línea horizontal de la letra I arriba
    line(50, 380, 64, 380);


    //pequenio izquierdo
    circuloPos(50, 376, 5, 90, 270);

    //arriba derecha
    circuloPos(60, 376, 5, -90, 90);
    //--------------------------------arriba termina

    // Dibuja la línea vertical de la letra I izquierda
    line(50, 370, 50, 330);

    //abajo 

    //pequenia izquierda
    circuloPos(50, 325, 5, 90, 270);

    //abajo derecha
    circuloPos(60, 325, 5, -90, 90);

    // Dibuja la línea horizontal de la letra I
    line(50, 320, 60, 320);

    // Dibuja la segunda línea vertical de la letra I derecha
    line(60, 370, 60, 330);



    //--------------------------------------TERMINA LETRA I
    //-------------------------------------------------------- LETRA O
    // Dibuja el círculo interior de la letra O
    circuloPos(84, 360, 8, 10, 170);
    // Dibuja el círculo exterior de la letra O
    circuloPos(84, 360, 20, 10, 170);

    //abajo
    // Dibuja el círculo interior de la letra O
    circuloPos(84, 340, 8, 180, 360);

    // Dibuja el círculo exterior de la letra O
    circuloPos(84, 340, 20, 180, 360);

    //izquierda 1
    line(76, 360, 76, 335);
    //izquierda 2
    line(64, 365, 64, 340);
    //derecha 1
    line(103, 363, 103, 340);
    //derecha 2
    line(91, 360, 91, 335);


    //----------------------------TERMINA LETRA O
    //-------------------------------------------LETRA S
    // Dibuja el arco superior de la letra S
    //grande
    circuloPos(125, 363, 18, 20, 270);

    //pequenio
    circuloPos(125, 363, 8, 0, 270);
    //punta o complemento d ela s
    circuloPos(137, 367, 5, -140, 50);

    // Dibuja el arco inferior de la letra S
    //grande
    circuloPos(125, 338, 18, -160, 90);

    //pequenioo
    circuloPos(125, 338, 8, -170, 90);

    //termina s bajo
    circuloPos(114, 333, 5, 10, 170);


    //----------------------------------TERMINA LETRA S
    ///////////////////-------------------------------------- Letra U
    // Dibuja la línea horizontal de la letra u arriba izquierda
    line(160, 380, 170, 380);

    //pequenio izquierdo
    circuloPos(160, 376, 5, 100, 270);
    //arriba derecha
    circuloPos(170, 376, 5, -90, 90);

    //linea izquierda
    //arco inferior de la U exterior 
    circuloPos(180, 340, 20, -180, 0);
    //linea exterio
    line(160, 340, 160, 372);
    //linea vertical media
    line(170, 340, 170, 372);
    //arco inferior U intrerior
    circuloPos(180, 340, 10, -180, 0);
    //derecho
    //linea horizontal derecha
    line(190, 340, 190, 372);
    //pequenio izquierdo
    circuloPos(190, 376, 5, 100, 270);

    //arriba derecha
    circuloPos(200, 376, 5, -90, 90);
    //linea vertical media
    line(190, 380, 200, 380);
    //linea exterio

    line(200, 340, 200, 372);

    //--------------------------------Termina U
    //-------------------------------------------------------LETRA N
    //pequenio izquierdo
    circuloPos(212, 376, 5, 100, 270);

    //linea superior 
    line(212, 380, 224, 380);

    //vertical izquierda ext
    line(212, 370, 212, 328);

    //pata 1 de la N
    circuloPos(212, 325, 5, 100, 270);

    //arriba derecha
    circuloPos(224, 325, 5, -90, 90);

    //linea baja pata 1
    line(212, 320, 224, 320);

    //vertical izquierda derecha
    line(223, 355, 223, 327);

    // Dibuja la línea diagonal de la letra N superior
    line(223, 380, 249, 335);

    // Dibuja la línea diagonal de la letra N interior
    line(224, 355, 239, 325);

    circuloPos(249, 330, 10, -160, 0);

    // Dibuja la línea vertical derecha de la letra N externa
    line(258, 370, 258, 326);

    // Dibuja la línea vertical derecha de la letra N interna
    line(248, 370, 248, 335);
    //decoracion de letra derecha
    //pequenio izquierdo
    circuloPos(248, 376, 5, 95, 275);

    //arriba derecha
    circuloPos(258, 376, 5, -90, 90);

    //linea de cierre 
    line(247, 380, 258, 380);

    //---------------------------------------TERMINA LETRA N
    //-------------------------------------------------------------LETRA I
    // Dibuja la línea horizontal de la letra I arriba
    line(270, 380, 283, 380);


    //pequenio izquierdo
    circuloPos(270, 376, 5, 90, 270);

    //arriba derecha
    circuloPos(280, 376, 5, -90, 90);
    //--------------------------------arriba termina

    // Dibuja la línea vertical de la letra I izquierda
    line(270, 370, 270, 328);

    //abajo 

    //pequenia izquierda
    circuloPos(270, 325, 5, 90, 270);

    //abajo derecha
    circuloPos(280, 325, 5, -90, 90);

    // Dibuja la línea horizontal de la letra I
    line(270, 320, 280, 320);

    // Dibuja la segunda línea vertical de la letra I derecha
    line(280, 370, 280, 328);

    //--------------------------------------TERMINA LETRA I
    //-----------------------------------------------------------LETRA O
    // Dibuja el círculo interior de la letra O
    circuloPos(305, 360, 8, 10, 170);
    // Dibuja el círculo exterior de la letra O
    circuloPos(305, 361, 20, 10, 170);

    //abajo
    // Dibuja el círculo interior de la letra O
    circuloPos(305, 340, 8, 180, 360);

    // Dibuja el círculo exterior de la letra O
    circuloPos(305, 339, 20, 180, 360);

    //izquierda 1
    line(297, 360, 297, 335);
    //izquierda 2
    line(285, 364, 285, 339);
    //derecha 1
    line(324, 365, 324, 338);
    //derecha 2
    line(312, 360, 312, 335);

    //----------------------------TERMINA LETRA O
    //-------------------------------------------------------LETRA N
    //pequenio izquierdo
    //243
    circuloPos(330, 376, 5, 100, 270);

    //linea superior 
    line(330, 380, 342, 380);

    //vertical izquierda ext
    line(330, 370, 330, 328);

    //pata 1 de la N
    circuloPos(330, 325, 5, 100, 270);

    //arriba derecha
    circuloPos(342, 325, 5, -90, 90);

    //linea baja pata 1
    line(330, 320, 342, 320);

    //vertical izquierda derecha
    line(342, 355, 342, 327);

    // Dibuja la línea diagonal de la letra N superior
    line(342, 380, 367, 335);

    // Dibuja la línea diagonal de la letra N interior
    line(342, 355, 357, 325);

    circuloPos(367, 330, 10, -160, 0);

    // Dibuja la línea vertical derecha de la letra N externa
    line(376, 370, 376, 326);

    // Dibuja la línea vertical derecha de la letra N interna
    line(366, 370, 366, 335);
    //decoracion de letra derecha
    //pequenio izquierdo
    circuloPos(366, 376, 5, 95, 275);

    //arriba derecha
    circuloPos(377, 376, 5, -90, 90);

    //linea de cierre 
    line(365, 380, 377, 380);

    //---------------------------------------TERMINA LETRA N
    //------------------------------------------------------------Letra L
    // Dibuja la línea vertical derecha de la letra N externa
    line(410, 370, 410, 330);

    // Dibuja la línea vertical derecha de la letra N interna
    line(400, 370, 400, 329);
    //decoracion de letra derecha
    //pequenio izquierdo
    circuloPos(400, 376, 5, 95, 275);

    //arriba derecha
    circuloPos(411, 376, 5, -90, 90);

    //linea de cierre 
    line(399, 380, 411, 380);
    //linea horizontal base
    line(399, 320, 426, 320);

    //adorno base
    circuloPos(400, 325, 5, 95, 275);

    //horizontal pequenio
    line(410, 330, 420, 330);

    //adorno final
    circuloPos(425, 330, 5, -20, 180);
    //linea adorno
    line(426, 320, 429, 329);

    //--------------------------------TERMINA LA L
    //-----------------------------------------------LETRA I
    // Dibuja la línea horizontal de la letra I arriba
    //297
    line(435, 380, 448, 380);


    //pequenio izquierdo
    circuloPos(435, 376, 5, 90, 270);

    //arriba derecha
    circuloPos(445, 376, 5, -90, 90);
    //--------------------------------arriba termina

    // Dibuja la línea vertical de la letra I izquierda
    line(435, 370, 435, 328);

    //abajo 

    //pequenia izquierda
    circuloPos(435, 325, 5, 90, 270);

    //abajo derecha
    circuloPos(445, 325, 5, -90, 90);

    // Dibuja la línea horizontal de la letra I
    line(435, 320, 445, 320);

    // Dibuja la segunda línea vertical de la letra I derecha
    line(445, 370, 445, 328);

    //--------------------------------------TERMINA LETRA I
    //----------------------------------------------------------LETRA B
    //ADORNO 1
    //pequenio izquierdoARRIBA
    circuloPos(457, 376, 5, 90, 270);

    //LINEA VERTICAL
    line(457, 371, 457, 330);
    //pequenio izquierdo abajo
    circuloPos(457, 326, 5, 90, 270);
    //forma la B
    circuloPos(467, 366, 15, -50, 95);
    //abjo
    circuloPos(470, 338, 18, -95, 70);
    //medio pequenios
    //forma la B
    circuloPos(467, 365, 5, -95, 95);
    //abjo
    circuloPos(470, 338, 8, -110, 110);
    //rellenos 
    //arriba
    line(457, 380, 465, 380);
    //relleno luna 1
    line(465, 369, 465, 359);
    //luna grande
    line(466, 345, 466, 329);
    //cierre b abajo
    line(457, 320, 469, 320);

    //------------------------TERMINA LETRA B
    //------------------------------------------LETRA E
    //ADORNO 1
    //pequenio izquierdoARRIBA
    circuloPos(492, 376, 5, 90, 270);

    //LINEA VERTICAL
    line(492, 371, 492, 329);
    //pequenio izquierdo abajo
    circuloPos(492, 325, 5, 90, 270);
    //linea arriba
    line(492, 380, 523, 380);
    //linea que une adorno
    line(523, 380, 523, 370);
    //adrono superior
    circuloPos(519, 370, 5, -180, 10);
    //completa parte alta
    line(504, 370, 516, 370);
    //hacia abajo
    line(504, 370, 504, 355);
    //linea media alta
    line(504, 357, 516, 357);
    //adorno medio arriba
    circuloPos(519, 357, 5, 0, 180);
    //une adornos
    line(523, 357, 523, 346);
    //adorno bajo
    circuloPos(519, 348, 5, -180, 10);
    //linea terminna medio
    line(514, 348, 504, 348);
    //linea hacia abajo
    line(504, 348, 504, 333);
    //conecta con adorno
    line(504, 333, 514, 333);
    //adorno 
    circuloPos(519, 333, 5, 0, 185);
    //linea hacia abajo
    line(523, 332, 523, 320);
    //linea cierre E
    line(492, 320, 523, 320);

    //-------------------------------TERMINA E
    //------------------------------------------LETRA R
    //ADORNO 1
    //pequenio izquierdoARRIBA
    circuloPos(531, 376, 5, 90, 270);

    //linea de cierre alto
    line(531, 380, 541, 380);
    //LINEA VERTICAL
    line(531, 371, 531, 329);
    //pequenio izquierdo abajo
    circuloPos(531, 325, 5, 90, 270);
    //pequenia derecha
    circuloPos(541, 325, 5, -90, 90);
    //cierre de pata baja
    line(531, 320, 541, 320);

    //forma la media luna grande
    circuloPos(541, 363, 18, -50, 95);
    //forma la media lua pequenia
    circuloPos(541, 363, 8, -80, 80);
    //linea de cieere de luna
    line(541, 370, 541, 355);
    //linea hacia arriba
    line(541, 330, 541, 345);
    //linea transverzal
    line(541, 345, 553, 323);
    //complemento pata abajo
    circuloPos(557, 326, 5, 200, 270);
    //conntinuacion pata baja
    line(557, 320, 567, 320);
    //pequenia pata punta
    circuloPos(566, 325, 5, -90, 90);
    //conntinuacion pata alta
    line(563, 329, 567, 329);
    //complemento pata arriba
    circuloPos(563, 335, 5, 200, 270);
    //linea final 
    line(559, 330, 551, 349);

    //--------------------------TERMINA R
    //-------------------------------------LETRA T
    //ADORNO 1
    //pequenio izquierdoARRIBA INICIO t PARTE ABAJO
    circuloPos(563, 370, 4, -180, 0);

    //linea que une
    line(578, 370, 565, 370);
    //linea hacia arriba
    line(559, 370, 560, 380);
    //adorno superior
    circuloPos(564, 380, 4, 10, 170);

    //linea de cierre alto
    line(570, 380, 588, 380);

    //parte de la t derecha
    //pequenio izquierdoARRIBA INICIO t PARTE ABAJO
    circuloPos(610, 370, 4, -180, 0);
    //linea que une no t
    line(593, 370, 607, 370);
    //linea hacia arriba
    line(613, 370, 612, 380);
    //adorno superior
    circuloPos(608, 380, 4, 10, 160);

    //linea de cierre alto
    line(568, 380, 605, 380);

    //LINEA VERTICAL
    line(578, 370, 578, 329);
    //pequenio izquierdo abajo
    circuloPos(578, 325, 5, 90, 270);
    //pequenia derecha
    circuloPos(593, 325, 5, -90, 90);
    //LINEA HACIA ARRIBA 
    //LINEA VERTICAL
    line(592, 370, 592, 329);

    //cierre t abajo
    line(578, 320, 593, 320);

    //--------------------------------TERMINA LA T
    //-----------------------------------------------LETRA A
    circuloPos(603, 325, 5, 90, 270);
    //union de patas
    line(603, 320, 613, 320);
    //pequenia derecha
    circuloPos(613, 325, 5, -90, 90);
    //linea transverzal hacia arriba
    line(603, 330, 623, 377);
    // luna superior
    circuloPos(628, 375, 5, 20, 150);

    //pata derecha
    circuloPos(638, 325, 5, 90, 270);
    //cierres pata 
    line(635, 320, 653, 320);
    //pequenia IZQUIERDA
    circuloPos(651, 325, 5, -90, 90);
    //linea de union transverzal derecha
    line(650, 330, 632, 377);
    //triangulo medio izquierda
    line(626, 360, 623, 350);
    //triangulo medio derecha
    line(626, 362, 631, 350);
    //union triangulo
    line(624, 350, 632, 350);

    //complemento abajo
    line(620, 340, 633, 340);
    //union con patas
    //derecha
    line(619, 340, 612, 329);
    //izquierda
    line(633, 340, 638, 328);

    //-----------------------------TERMINA A
    //-----------------------------------------------------------------------------Letra D INICIA
    // Dibuja la línea horizontal superior de la letra D
    //12
    line(660, 370, 660, 330);

    //parte grande
    // Dibuja la curva derecha de la letra D
    circuloPos(666, 350, 30, -100, 100);


    //parte pequenia
    // Dibuja la curva derecha de la letra D
    circuloPos(670, 350, 15, -95, 95);

    // Dibuja la línea horizontl al medioo
    line(668, 335, 668, 365);
    //decorcion superior
    circuloPos(662, 375, 5, 90, 260);
    //decoracion inferior
    circuloPos(662, 325, 5, 100, 275);

    glFlush();
    //-----------------------------------Letra D TERMINA
   
}




void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Establece el color de fondo en negro
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 700, 0, 700); // Establece la coordenada de la ventana
}

void display(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(252, 227, 0); // Establece el color del lápiz en dorado

    
   
    drawD();

    GLfloat fillColor[3] = {1.000, 0.843, 0.000}; // Color rojo
    GLfloat targetColor[3] = {1.0, 1.0, 1.0}; // Color blanco
    glPointSize(1);
    // Llamar a la función floodFill para rellenar un área
    floodFill(11, 322, fillColor, targetColor);
     

    floodFill(55, 322, fillColor, targetColor);

    floodFill(85, 360, fillColor, targetColor);
    //s
      
    floodFill(125, 315, fillColor, targetColor);
    //u
    floodFill(160, 366, fillColor, targetColor);
    //n
      
    floodFill(212, 366, fillColor, targetColor);
    //i
      
    floodFill(270, 366, fillColor, targetColor);
    //o
   
    floodFill(305, 360, fillColor, targetColor);
    //n
      
    floodFill(330, 366, fillColor, targetColor);
    //l
  
    floodFill(400, 366, fillColor, targetColor);
    //i
    
    floodFill(435, 366, fillColor, targetColor);
    //b
    
    floodFill(457, 366, fillColor, targetColor);
    //e
   
    floodFill(492, 366, fillColor, targetColor);
    //r
    
    floodFill(531, 366, fillColor, targetColor);
    //t
     
    floodFill(563, 366, fillColor, targetColor);
    //a
   

    floodFill(627, 364, fillColor, targetColor);
     
    //d
    floodFill(662, 323, fillColor, targetColor);
      for (int i = 0; i < filledPixelsCount; i++) {
        glColor3fv(fillColor);
        glPointSize(1.0);
        glBegin(GL_POINTS);
        glVertex2i(filledPixels[i].x, filledPixels[i].y - 2);
        glEnd();
    }
    line(0, 150, 700, 150);
    line(0, 250, 700, 250);
    line(0, 425, 700, 425);
    line(0, 525, 700, 525);
    GLfloat fillColor2[3] = {0.0, 0.0, 1.0};
    //GLfloat targetColor2[3] = {1.0, 1.0, 1.0};
    floodFill(0, 151, fillColor2, targetColor);

    floodFill(0, 426, fillColor2, targetColor);
    for (int i = 0; i < filledPixelsCount; i++) {
        glColor3fv(fillColor2);
        glPointSize(1.0);
        glBegin(GL_POINTS);
        glVertex2i(filledPixels[i].x, filledPixels[i].y -2 );
        glEnd();
        exit(0);
        
    }
    glFlush();
}


void circuloPos(int puntoX, int puntoY, int radio, int iterador, int numeroveces) {
    glBegin(GL_POINTS);
    for (int i = iterador; i <= numeroveces; i++) {
        float theta = i * 3.14159 / 180.0;
        int x = puntoX + radio * cos(theta);
        int y = puntoY + radio * sin(theta);
        glVertex2i(x, y);
    }
    glEnd();
}

void line(int x1, int y1, int x2, int y2) {
    //sacamos valor adsoluto a ambos casos
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    //ahora verificamos si incrementa o decrementa
    int sx = x1 < x2 ? 1 : -1;
    int sy = y1 < y2 ? 1 : -1;
    //ahora restamos los valores adsolutos
    int err = dx - dy;
    //asignamos los puntos iniciales para empezar desde el origen
    int x = x1;
    int y = y1;

    //inicializamos el punteo
    glBegin(GL_POINTS);
    //creamos un bucle para ir validando los puntos o pixeles 1 por 1
    //donde validamos si x es distintp de x2 igual con para hasta llegar igualar ambos puntos x y x2
    while (x != x2 || y != y2) {
        //imprimimos los puntos
        glVertex2f(x, y);
        //multiplicamos por 2 segun la formula Pk= Pk + 2dy - 2dx en este caso simplificamos
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
    glEnd();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutCreateWindow("Letra D con OpenGL");

    init();

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}