#include "Personaje.h"

void Personaje::DibujarPersonaje(int segmentos, float alfa, float x, float y, float z)
{
    glPushMatrix();

        glTranslatef(-0.5, 0.0, 0.0);       //Trasladar el origen a la izquierda
        glRotatef((GLfloat)alfa, 0.0, 0.0, 1.0);    // Hacer la rotacion en eje Z
        glTranslatef(0.5, 0.0, 0.0);       // Traslada el origen al centro del cubo
        glPushMatrix();
            glScalef(1.0, 0.4, 1.0);        // Dibujar el cubo
            glutSolidCube(1.0);
        glPopMatrix();
        
        for (int i = 0; i < segmentos; i++)
        {

            glTranslatef(0.5, 0.0, 0.0);
            glRotatef((GLfloat)alfa, 0.0, 0.0, 1.0);
            glTranslatef(0.5, 0.0, 0.0);
            glPushMatrix();
                glScalef(1.0, 0.4, 1.0);        // Dibujar el cubo
                glutSolidCube(1.0);
            glPopMatrix();


        }

    glPopMatrix();

}

void Personaje::DibujarCubo(float x1, float y1, float z1, int angle, int x2, int y2, int z2)
{
    glPushMatrix(); //Conserva el origen de cada objeto

        glPushMatrix();

            glTranslatef(x1, y1, z1);    // Poner el cubo a la derecha de la tetera (X,Y,Z)
            glRotatef(angle, x2, y2, z2); //Rotacion del objeto en su mismo eje
            glutSolidCube(0.5); //Poner el cubo

        glPopMatrix();

    glPopMatrix();  //Conserva el origen de cada objeto

}

void Personaje::DibujarEsfera(float x1, float y1, float z1, float x2, float y2, float z2)
{
    glPushMatrix(); //Conserva el origen de cada objeto

        glTranslatef(x1, y1, z1);    
        glutSolidSphere(x2, y2, z2);

    glPopMatrix();  //Conserva el origen de cada objeto

}



/*
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

     */