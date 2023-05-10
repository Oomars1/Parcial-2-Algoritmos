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

void drawD() {
    /*
            line(0,380 , 700 , 380);
            line(0,320 , 700 , 320);
     */
    //-----------------------------------------------------------------------------Letra D INICIA
    // Dibuja la línea horizontal superior de la letra D
    line(13, 370, 13, 330);
    //parte grande
    // Dibuja la curva derecha de la letra D
    circuloPos(20, 350, 30, -100, 100);


    //parte pequenia
    // Dibuja la curva derecha de la letra D
    circuloPos(25, 350, 15, -95, 95);

    // Dibuja la línea horizontl al medioo
    line(22, 335, 22, 365);
    //decorcion superior
    circuloPos(13, 375, 5, 90, 270);
    //decoracion inferior
    circuloPos(13, 325, 5, 90, 275);

    //-----------------------------------Letra D TERMINA
    /////-------------------------------------------------- LETRA I
    // Dibuja la línea horizontal de la letra I arriba
    line(55, 380, 70, 380);


    //pequenio izquierdo
    circuloPos(55, 376, 5, 90, 270);

    //arriba derecha
    circuloPos(65, 376, 5, -90, 90);
    //--------------------------------arriba termina

    // Dibuja la línea vertical de la letra I izquierda
    line(55, 370, 55, 330);

    //abajo 

    //pequenia izquierda
    circuloPos(55, 325, 5, 90, 270);

    //abajo derecha
    circuloPos(65, 325, 5, -90, 90);

    // Dibuja la línea horizontal de la letra I
    line(55, 320, 65, 320);

    // Dibuja la segunda línea vertical de la letra I derecha
    line(65, 370, 65, 330);
    //--------------------------------------TERMINA LETRA I
    //-------------------------------------------------------- LETRA O
    // Dibuja el círculo interior de la letra O
    circuloPos(92, 360, 8, 10, 170);
    // Dibuja el círculo exterior de la letra O
    circuloPos(92, 360, 20, 10, 170);

    //abajo
    // Dibuja el círculo interior de la letra O
    circuloPos(92, 340, 8, 180, 360);

    // Dibuja el círculo exterior de la letra O
    circuloPos(92, 340, 20, 180, 360);

    //izquierda 1
    line(84, 360, 84, 335);
    //izquierda 2
    line(72, 365, 72, 340);
    //derecha 1
    line(111, 365, 111, 340);
    //derecha 2
    line(99, 360, 99, 335);
    //----------------------------TERMINA LETRA O
    //-------------------------------------------LETRA S
    // Dibuja el arco superior de la letra S
    //grande
    circuloPos(135, 363, 18, 20, 270);

    //pequenio
    circuloPos(135, 363, 8, 0, 270);
    //punta o complemento d ela s
    circuloPos(147, 367, 5, -140, 50);

    // Dibuja el arco inferior de la letra S
    //grande
    circuloPos(135, 338, 18, -160, 90);

    //pequenioo
    circuloPos(135, 338, 8, -170, 90);

    //termina s bajo
    circuloPos(124, 333, 5, 10, 170);
    //----------------------------------TERMINA LETRA S
    ///////////////////-------------------------------------- Letra U
    // Dibuja la línea horizontal de la letra u arriba izquierda
    line(177, 380, 187, 380);

    //pequenio izquierdo
    circuloPos(177, 376, 5, 100, 270);
    //arriba derecha
    circuloPos(187, 376, 5, -90, 90);

    //linea izquierda
    //arco inferior de la U exterior 
    circuloPos(197, 340, 20, -180, 0);
    //linea exterio
    line(177, 340, 177, 372);
    //linea vertical media
    line(187, 340, 187, 372);
    //arco inferior U intrerior
    circuloPos(197, 340, 10, -180, 0);
    //derecho
    //linea horizontal derecha
    line(207, 340, 207, 372);
    //pequenio izquierdo
    circuloPos(207, 376, 5, 100, 270);

    //arriba derecha
    circuloPos(217, 376, 5, -90, 90);
    //linea vertical media
    line(207, 380, 217, 380);
    //linea exterio

    line(217, 340, 217, 372);
    //--------------------------------Termina U
    //-------------------------------------------------------LETRA N
    //pequenio izquierdo
    circuloPos(230, 376, 5, 100, 270);

    //linea superior 
    line(230, 380, 247, 380);

    //vertical izquierda ext
    line(230, 370, 230, 328);

    //pata 1 de la N
    circuloPos(230, 325, 5, 100, 270);

    //arriba derecha
    circuloPos(242, 325, 5, -90, 90);

    //linea baja pata 1
    line(230, 320, 242, 320);

    //vertical izquierda derecha
    line(241, 365, 241, 327);

    // Dibuja la línea diagonal de la letra N superior
    line(247, 380, 272, 335);

    // Dibuja la línea diagonal de la letra N interior
    line(242, 365, 262, 325);

    circuloPos(272, 330, 10, -160, 0);

    // Dibuja la línea vertical derecha de la letra N externa
    line(281, 370, 281, 326);

    // Dibuja la línea vertical derecha de la letra N interna
    line(271, 370, 271, 335);
    //decoracion de letra derecha
    //pequenio izquierdo
    circuloPos(271, 376, 5, 95, 275);

    //arriba derecha
    circuloPos(282, 376, 5, -90, 90);

    //linea de cierre 
    line(270, 380, 282, 380);
    //---------------------------------------TERMINA LETRA N
    //-------------------------------------------------------------LETRA I
    // Dibuja la línea horizontal de la letra I arriba
    line(297, 380, 310, 380);


    //pequenio izquierdo
    circuloPos(297, 376, 5, 90, 270);

    //arriba derecha
    circuloPos(307, 376, 5, -90, 90);
    //--------------------------------arriba termina

    // Dibuja la línea vertical de la letra I izquierda
    line(297, 370, 297, 328);

    //abajo 

    //pequenia izquierda
    circuloPos(297, 325, 5, 90, 270);

    //abajo derecha
    circuloPos(307, 325, 5, -90, 90);

    // Dibuja la línea horizontal de la letra I
    line(297, 320, 307, 320);

    // Dibuja la segunda línea vertical de la letra I derecha
    line(307, 370, 307, 328);
    //--------------------------------------TERMINA LETRA I
    //-----------------------------------------------------------LETRA O
    // Dibuja el círculo interior de la letra O
    circuloPos(333, 360, 8, 10, 170);
    // Dibuja el círculo exterior de la letra O
    circuloPos(333, 361, 20, 10, 170);

    //abajo
    // Dibuja el círculo interior de la letra O
    circuloPos(333, 340, 8, 180, 360);

    // Dibuja el círculo exterior de la letra O
    circuloPos(333, 339, 20, 180, 360);

    //izquierda 1
    line(325, 360, 325, 335);
    //izquierda 2
    line(313, 363, 313, 340);
    //derecha 1
    line(352, 365, 352, 340);
    //derecha 2
    line(340, 360, 340, 335);
    //----------------------------TERMINA LETRA O
    //-------------------------------------------------------LETRA N
    //pequenio izquierdo
    //243
    circuloPos(360, 376, 5, 100, 270);

    //linea superior 
    line(360, 380, 377, 380);

    //vertical izquierda ext
    line(360, 370, 360, 328);

    //pata 1 de la N
    circuloPos(360, 325, 5, 100, 270);

    //arriba derecha
    circuloPos(372, 325, 5, -90, 90);

    //linea baja pata 1
    line(360, 320, 372, 320);

    //vertical izquierda derecha
    line(371, 365, 371, 327);

    // Dibuja la línea diagonal de la letra N superior
    line(377, 380, 402, 335);

    // Dibuja la línea diagonal de la letra N interior
    line(372, 365, 392, 325);

    circuloPos(402, 330, 10, -160, 0);

    // Dibuja la línea vertical derecha de la letra N externa
    line(411, 370, 411, 326);

    // Dibuja la línea vertical derecha de la letra N interna
    line(401, 370, 401, 335);
    //decoracion de letra derecha
    //pequenio izquierdo
    circuloPos(401, 376, 5, 95, 275);

    //arriba derecha
    circuloPos(412, 376, 5, -90, 90);

    //linea de cierre 
    line(400, 380, 412, 380);
    //---------------------------------------TERMINA LETRA N
    //------------------------------------------------------------Letra L
    // Dibuja la línea vertical derecha de la letra N externa
    line(451, 370, 451, 330);

    // Dibuja la línea vertical derecha de la letra N interna
    line(441, 370, 441, 329);
    //decoracion de letra derecha
    //pequenio izquierdo
    circuloPos(441, 376, 5, 95, 275);

    //arriba derecha
    circuloPos(452, 376, 5, -90, 90);

    //linea de cierre 
    line(440, 380, 452, 380);
    //linea horizontal base
    line(440, 320, 467, 320);

    //adorno base
    circuloPos(441, 325, 5, 95, 275);

    //horizontal pequenio
    line(451, 330, 461, 330);

    //adorno final
    circuloPos(466, 330, 5, -20, 180);
    //linea adorno
    line(467, 320, 470, 329);
    //--------------------------------TERMINA LA L
    //-----------------------------------------------LETRA I
    // Dibuja la línea horizontal de la letra I arriba
    //297
    line(477, 380, 490, 380);


    //pequenio izquierdo
    circuloPos(477, 376, 5, 90, 270);

    //arriba derecha
    circuloPos(487, 376, 5, -90, 90);
    //--------------------------------arriba termina

    // Dibuja la línea vertical de la letra I izquierda
    line(477, 370, 477, 328);

    //abajo 

    //pequenia izquierda
    circuloPos(477, 325, 5, 90, 270);

    //abajo derecha
    circuloPos(487, 325, 5, -90, 90);

    // Dibuja la línea horizontal de la letra I
    line(477, 320, 487, 320);

    // Dibuja la segunda línea vertical de la letra I derecha
    line(487, 370, 487, 328);
    //--------------------------------------TERMINA LETRA I
    //----------------------------------------------------------LETRA B
    //ADORNO 1
    //pequenio izquierdoARRIBA
    circuloPos(500, 376, 5, 90, 270);

    //LINEA VERTICAL
    line(500, 371, 500, 330);
    //pequenio izquierdo abajo
    circuloPos(500, 326, 5, 90, 270);
    //forma la B
    circuloPos(510, 366, 15, -50, 95);
    //abjo
    circuloPos(513, 338, 18, -95, 70);
    //medio pequenios
     //forma la B
    circuloPos(510, 365, 5, -95, 95);
    //abjo
    circuloPos(513, 338, 8, -110, 110);
    //rellenos 
    //arriba
    line(500, 380, 510, 380);
    //relleno luna 1
    line(508,369, 508, 359);
    //luna grande
    line(509, 345, 509, 329);
    //cierre b abajo
    line(500, 320, 512,320);
    //------------------------TERMINA LETRA B
    //------------------------------------------LETRA E
    //ADORNO 1
    //pequenio izquierdoARRIBA
    circuloPos(538, 376, 5, 90, 270);

    //LINEA VERTICAL
    line(538, 371, 538, 329);
    //pequenio izquierdo abajo
    circuloPos(538, 325, 5, 90, 270);
    //linea arriba
    line(538, 380, 570, 380);
    //linea que une adorno
    line(569, 380, 569, 370);
    //adrono superior
    circuloPos(565, 370, 5, -180, 10);
    //completa parte alta
    line(550, 370, 560, 370);
    //hacia abajo
    line(550, 370, 550, 355);
    //linea media alta
    line(550, 358, 560, 358);
    //adorno medio arriba
    circuloPos(565, 358, 5, 0 ,180);
    //une adornos
    line(569, 357, 569, 346 );
    //adorno bajo
    circuloPos(565, 348, 5, -180, 10);
    //linea terminna medio
    line(560, 348, 550, 348);
    //linea hacia abajo
    line(550,348, 550, 333);
    //conecta con adorno
    line(550, 333, 560, 333);
    //adorno 
    circuloPos(565, 333, 5, 0 ,185);
    //linea hacia abajo
    line(569, 332, 569, 320);
    //linea cierre E
    line(538, 320, 569, 320);
    //-------------------------------TERMINA E
    //------------------------------------------LETRA R
    //ADORNO 1
    //pequenio izquierdoARRIBA
    circuloPos(580, 376, 5, 90, 270);
    //linea de cierre alto
    line(580, 380, 590, 380);
    //LINEA VERTICAL
    line(580, 371, 580, 329);
    //pequenio izquierdo abajo
    circuloPos(580, 325, 5, 90, 270);
    //pequenia derecha
    circuloPos(590, 325, 5, -90, 90);
    //cierre de pata baja
    line(580, 320, 590, 320);
    
    //forma la media luna grande
    circuloPos(590, 363, 18, -50, 95);
     //forma la media lua pequenia
    circuloPos(590, 363, 8, -80, 80);
    //linea de cieere de luna
    line(590, 370, 590 , 355);
    //linea hacia arriba
    line(590,330, 590, 345);
    //linea transverzal
    line(590, 345, 600,325);
    //complemento pata abajo
    circuloPos(606, 326, 5, 200, 270);
    //conntinuacion pata baja
    line(606, 320, 616, 320);
    //pequenia pata punta
    circuloPos(615, 325, 5, -90, 90);
    //conntinuacion pata alta
    line(612, 329, 616, 329);
    //complemento pata arriba
    circuloPos(612, 335, 5, 200, 270);
    //linea final 
    line(608, 330, 600, 349);
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

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    /*
        glColor3f(252, 227, 0); // Establece el color del lápiz en dorado
     */
    glColor3f(0, 0, 0);
    glPointSize(1); // Establece el tamaño del lápiz
    drawD(); // Dibuja la letra D

    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Establece el color de fondo en negro
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 700, 0, 700); // Establece la coordenada de la ventana
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