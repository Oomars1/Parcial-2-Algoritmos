#include <GL/glut.h>

#define MAX_PIXELS 10000

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

    glColor3f(252, 227, 0); // Establece el color del lápiz en dorado
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
}

void display() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    // Dibujar un contorno cerrado
    glColor3f(0.0, 0.0, 0.0);
    drawD();

    GLfloat fillColor[3] = {1.0, 0.0, 0.0}; // Color rojo
    GLfloat targetColor[3] = {1.0, 1.0, 1.0}; // Color blanco
    glPointSize(1);
    // Llamar a la función floodFill para rellenar un área
    floodFill(11, 322, fillColor, targetColor);
    
    for (int i = 0; i < filledPixelsCount; i++) {
        glColor3fv(fillColor);
        glPointSize(1.0);
        glBegin(GL_POINTS);
        glVertex2i(filledPixels[i].x, filledPixels[i].y+12);
        glEnd();
    }
    
    for (int i = 0; i < filledPixelsCount; i++) {
        glColor3fv(fillColor);
        glPointSize(1.0);
        glBegin(GL_POINTS);
        glVertex2i(filledPixels[i].x, filledPixels[i].y+12);
        glEnd();
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
    glutCreateWindow("Relleno de pixeles");
    gluOrtho2D(0, 700, 0, 700);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}