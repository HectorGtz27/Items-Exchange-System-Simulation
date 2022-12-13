#include <iostream>
#include "Proveedor.h"
#include "Producto.h"
#include <string>
using namespace std;

class Comprador
{
private:
    string nombreComprador;
    Proveedor producto;
    double saldo;
    int cantidad;

public:
    //CONSTRUCTOR
    Comprador();
    Comprador(string cNombreComprador, double cSaldo); 

    //GETTER
    string getNombreComprador();
    Proveedor getProducto();
    double getSaldo();
    int getCantidad();
 
    //SETTER
    void setNombreComprador(string cNombreComprador);
    void setProducto(Proveedor& cProducto);
    void setSaldo(double cSaldo);
    void setCantidad(int cCantidad);

    //FUNCIONALIDAD
    int comprarStock(Proveedor&);
    void actualizarStock(Proveedor&);
    void saldoActualizado(Proveedor, Producto);

    //DESTRUCTOR
    ~Comprador();
};