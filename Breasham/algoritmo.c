#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 0, 0);
    glPointSize(5);

    //en este caso para moverlo de posicion seria el eje x en este caso 0 va de esta forma (x1,y1)- (x2,y2)

    drawLine(140, 90, 220, 180); // Dibuja una línea desde (0, -100) hasta (0, 100)
    
    drawLine(100, 350, 600, 350);

    glFlush();
}

//ponemos como parametros de la funcion los x1 y x2, y1 y y2
void drawLine(int x1, int y1, int x2, int y2) {
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