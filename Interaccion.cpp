#include "Interaccion.h"
#include <iostream>
#include <math.h>

/*void Interaccion::rebote(Personaje& p, Menu m)
{
	//suponiendo que el punto de posicion del personaje es el centro y del menu la esquina inferior izquierda

	float xmin = m.posicion.x;
	float ymin = m.posicion.y;
	float xmax = m.posicion.x + m.ancho;
	float ymax = m.posicion.y + m.alto;

	// el numero sirve para arreglar el peque�o error de ajuste
	if (p.posicion.x > xmin  && p.posicion.x < xmin + 1 && p.posicion.y < ymax && p.posicion.y > ymin) p.posicion.x = xmin;// interacci�n izquierda
	if (p.posicion.x < xmax && p.posicion.x > xmax - 1 && p.posicion.y < ymax && p.posicion.y > ymin) p.posicion.x = xmax;// interacci�n derecha
	if (p.posicion.y < ymax + 3 && p.posicion.y > ymin && p.posicion.x > xmin && p.posicion.x < xmax ) p.posicion.y = ymax + 3; //interacci�n arriba
	if (p.posicion.y > ymin - 3 && p.posicion.y < ymin && p.posicion.x > xmin && p.posicion.x < xmax) p.posicion.y = ymin - 3; //interacci�n abajo
	//if () p.posicion.y = xmax;//interacci�n por izq y "arriba"
	//return false;
}*/

void Interaccion::rebote(Personaje& p, ObstaculoFijo o)
{
	//suponiendo que el punto de posicion del personaje es el centro y del Obstaculo Fijo tambi�n
	float xmin = o.posicion.x - o.ancho/2;
	float ymin = o.posicion.y - o.alto/2;
	float xmax = o.posicion.x + o.ancho/2;
	float ymax = o.posicion.y + o.alto/2;

	// el numero sirve para arreglar el peque�o error de ajuste
	if (p.posicion.x > xmin && p.posicion.x < xmin + 1 && p.posicion.y < ymax && p.posicion.y > ymin) p.posicion.x = xmin;// interacci�n izquierda
	if (p.posicion.x < xmax && p.posicion.x > xmax - 1 && p.posicion.y < ymax && p.posicion.y > ymin) p.posicion.x = xmax;// interacci�n derecha
	if (p.posicion.y < ymax + 1 && p.posicion.y > ymin && p.posicion.x > xmin && p.posicion.x < xmax) p.posicion.y = ymax + 1; //interacci�n arriba
	if (p.posicion.y > ymin - 1 && p.posicion.y < ymin && p.posicion.x > xmin && p.posicion.x < xmax) p.posicion.y = ymin - 1; //interacci�n abajo
}

bool Interaccion::rebote(Personaje& p, ObstaculoMovil& o)
{
	//suponiendo que el punto de posicion del personaje es el centro y del Obstaculo Fijo tambi�n
	float xmin = o.posicion.x - o.ancho / 2;
	float ymin = o.posicion.y - o.alto / 2;
	float xmax = o.posicion.x + o.ancho / 2;
	float ymax = o.posicion.y + o.alto / 2;

	// el numero sirve para arreglar el peque�o error de ajuste
	if (p.posicion.x > xmin && p.posicion.x < xmin + 1 && p.posicion.y < ymax && p.posicion.y > ymin) p.posicion.x = xmin;// interacci�n izquierda
	if (p.posicion.x < xmax && p.posicion.x > xmax - 1 && p.posicion.y < ymax && p.posicion.y > ymin) p.posicion.x = xmax;// interacci�n derecha
	if (p.posicion.y < ymax + 1 && p.posicion.y > ymin && p.posicion.x > xmin && p.posicion.x < xmax) p.posicion.y = ymax + 1; //interacci�n arriba
	if (p.posicion.y > ymin - 1 && p.posicion.y < ymin && p.posicion.x > xmin && p.posicion.x < xmax) p.posicion.y = ymin - 1; //interacci�n abajo

	else return false;
}

bool Interaccion::colision(Personaje& p, Bonus b)
{
	//suponiendo que el punto de posicion del personaje es el centro y del Obstaculo Fijo tambi�n
	float xmin = b.posicion.x - b.ancho / 2;
	float ymin = b.posicion.y - b.alto / 2;
	float xmax = b.posicion.x + b.ancho / 2;
	float ymax = b.posicion.y + b.alto / 2;

	// el numero sirve para arreglar el peque�o error de ajuste
	if (p.posicion.x > xmin && p.posicion.x < xmin + 1 && p.posicion.y < ymax && p.posicion.y > ymin) return true;// interacci�n izquierda
	if (p.posicion.x < xmax && p.posicion.x > xmax - 1 && p.posicion.y < ymax && p.posicion.y > ymin) return true;// interacci�n derecha
	if (p.posicion.y < ymax + 1 && p.posicion.y > ymin && p.posicion.x > xmin && p.posicion.x < xmax) return true; //interacci�n arriba
	if (p.posicion.y > ymin - 1 && p.posicion.y < ymin && p.posicion.x > xmin && p.posicion.x < xmax) return true; //interacci�n abajo
	return false;
}