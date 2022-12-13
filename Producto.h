#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Producto
{
private:
	string nombreProducto;
	double precioProducto;
public:
	//CONSTRUCTOR
	Producto();
	Producto(string cNombreProducto, double cPrecioProducto);

	//GETTERS
	string getNombreProducto();
	double getPrecioProducto();

	//SETTERS
	void setNombreProducto(string cNombreProducto);
	void setPrecioProducto(double cPrecioProducto);


	//DESTRUCTOR
	~Producto();
};



