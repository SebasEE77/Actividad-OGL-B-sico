#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>



class Personaje
{
public:
	Personaje() {};
	void DibujarPersonaje(int segmentos, float alfa, float x, float y, float z);
	void DibujarCubo(float x1, float y1, float z1, int angle, int x2, int y2, int z2);
	void DibujarEsfera(float x1, float y1, float z1, float x2, float y2, float z2);
};

