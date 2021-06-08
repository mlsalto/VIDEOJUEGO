#pragma once

#include "freeglut.h"
#include "ETSIDI.h"
using namespace ETSIDI;

class Personaje
{
public:
	Personaje();

	
	void dibujar();
	void mover(float t);
	void teclaEspecialAbajo(unsigned char key);
	
	void setVel(float vx, float vy);
	void setPos(float px, float py);

	virtual ~Personaje () {}
private:
	//SpriteSequence sprite;      "Texturas/idle.png"
	//SpriteSequence* correrdcha;
	//SpriteSequence* correrizq;
	//SpriteSequence* saltar;

	SpriteSequence correr{ "Texturas/correrdcha.png", 8, 1, 100, true, posicion.x, posicion.y, 16, 16 };
	SpriteSequence idle{ "Texturas/idle.png", 6, 1, 100, true, posicion.x, posicion.y, 16, 16 };
	SpriteSequence saltar{ "Texturas/saltar.png",8,1,180,true,posicion.x,posicion.y,16,16 }; //arreglar sprite

	float dcha;


	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
};
