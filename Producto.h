#include <stdio.h>
#include <string>
using namespace std;
#ifndef Producto_h
#define Producto_h

class Producto {
private:
	string nombreProducto;
	double precioProducto;

public:
	Producto();
	Producto(string, double);

	string getNombreProducto();
	double getPrecioProducto();
	void setNombreProducto(string cNombreProducto);
	void setPrecioProducto(double cPrecioProducto);


};

#endif