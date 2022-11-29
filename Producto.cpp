#include "Producto.h"
#include <string>
#include <iostream>

Producto::Producto() {
	nombreProducto = "";
	precioProducto = 0;

};
Producto::Producto(string cNombreProducto, double cPrecioProducto) {
	nombreProducto = cNombreProducto;
	precioProducto = cPrecioProducto;

};

string Producto::getNombreProducto() {
	return nombreProducto;

};
double Producto::getPrecioProducto() {
	return precioProducto;

};
void Producto::setNombreProducto(string cNombreProducto) {
	nombreProducto = cNombreProducto;

};
void Producto::setPrecioProducto(double cPrecioProducto) {
	precioProducto = cPrecioProducto;

};