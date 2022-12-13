#ifndef Comprador_h
#define Comprador_h

#include "Comprador.h"
#include "Proveedor.h"
#include "Producto.h"
#include <string>
#include <iostream>
using namespace std;

Comprador::Comprador()
{
    nombreComprador = "";
    cantidad = 0;
    saldo = 0;

};

Comprador::Comprador(string cNombreComprador, double cSaldo)
{
    nombreComprador = cNombreComprador;
    saldo = cSaldo;
};

//GETTER
string Comprador::getNombreComprador()
{
    return nombreComprador;
};
Proveedor Comprador::getProducto()
{
    return producto;
};

double Comprador::getSaldo() {

    return saldo;
};

int Comprador::getCantidad() {

    return cantidad;
};


//SETTER
void Comprador::setNombreComprador(string cNombreComprador)
{
    nombreComprador = cNombreComprador;
};
void Comprador::setProducto(Proveedor& cProducto)
{
    producto = cProducto;
};

void Comprador::setSaldo(double cSaldo) {

    saldo = cSaldo;

};

void Comprador::setCantidad(int cCantidad) {

    cantidad = cCantidad;

};

int Comprador::comprarStock(Proveedor& p) //
{
    
    cout << "Cantidad a comprar: ";
    int b;
    cin >> b;

    //
    setCantidad(b);

    

    int a = p.getStock();
    if (b <= a && b > 0 ) {

        cout << "Compra realizada con exito" << endl;
        p.decrementarStock(b);
        cout << "El stock original de  " << p.getNombreProveedor() << "  es de:  " << a << endl;

        cantidad = b;
        cout << "Y se redujo a: " << p.getStock() << endl;
        saldo = (saldo - (b * p.getProducto().getPrecioProducto()));
        cout << "El saldo de " << getNombreComprador() << " es de " << saldo << endl;

    }
    else {
        cout << "No se pudo realizar la compra" << endl;
        return a;
    }
    return a;
};

void Comprador::actualizarStock(Proveedor& p) {
    if (cantidad <= p.getStock() && cantidad > 0) {

        cout << "Piezas compradas: " << cantidad << endl;
        cout << "Actualizacion de stock: " << (p.getStock() - cantidad) << endl;
    }
    
    else {

        cout << "Error" << endl;
    }
        
    
};

void Comprador::saldoActualizado(Proveedor h, Producto g) {
 
    if (cantidad <= h.getStock() && cantidad > 0) {
        saldo= (saldo - (cantidad * g.getPrecioProducto()));
        cout << "Saldo restante: $" << saldo << endl;

    }
    else {

        cout << "Saldo restante: $" << saldo << endl;
    }
    

};

#endif
Comprador::~Comprador() {};





