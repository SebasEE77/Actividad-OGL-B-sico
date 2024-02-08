#include "Personaje.h"

void Personaje::DibujarPersonaje(float x, float y, float z)
{
    glPushMatrix();
    
        // Dibujar esfera
        glPushMatrix();
        glTranslatef(x, y-0.1, z);    // Poner la esfera a la izquierda de la tetera
        glutSolidSphere(0.5, 20, 20);
        glPopMatrix();

        // Dibujar un triangulo
        glPushMatrix();
        glTranslatef(x, y, z);    // Poner el triangulo arriba de la tetera
        glBegin(GL_TRIANGLES);  //Se dibuja el triangulo, como son tres vertices se hace tres veces de acuerdo a la medida en el plano cartesiano
        glVertex3f(1, 0, 0);
        glVertex3f(0, 1, 0);
        glVertex3f(-1, 0, 0);
        glEnd();
        glPopMatrix();

    glPopMatrix();

}