#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Proveedor.h"
#include "Comprador.h"
#include "Producto.h"
#include <ostream>
#include <stdlib.h>


using namespace std;

int menu, cantidadProveedores, stock3, cantidadCompra;
string nombre, nombreProveedor, nombreComprador, nombreProducto, nombreProductoAComprar, productoAComprar;
double  saldoComprador, precio, saldoFinal;

Producto producto1;
Proveedor proveedor1;
Comprador comprador1;

vector<Proveedor> listaProveedor; // lista para Proveedor
vector<Comprador> listaComprador; // lista para Proveedor

void escribir();

int main() {




	

		while (true) {
			cout << "Bienvenido a MHARRD" << endl;
			cout << endl;
			cout << "Ingresa (1) para ingresar los proveedores,  (2) para checar el catalogo, (3) para comprar y registrar el comprador y (4) para salir  : " << endl;
			cin >> menu;



			if (menu == 1) {


				cout << "Cuantos proveedores quieres ingresar: " << endl;
				cin >> cantidadProveedores;

				for (int i = 0; i < cantidadProveedores; i++) {


					cout << "Ingresa el nombre del proveedor: " << endl;
					cin >> nombreProveedor;

					cout << "Ingresa el nombre del producto: " << endl;
					cin >> nombreProducto;

					cout << "Ingresa el precio: " << endl;
					cin >> precio;

					cout << "Ingresa el stock que se tiene: " << endl;
					cin >> stock3;

					Producto productoN(nombreProducto, precio);

					Proveedor proveedorN(nombreProveedor, productoN, stock3);

					listaProveedor.push_back(proveedorN);
					cout << endl;



				};




			}
			else if (menu == 2) {

				for (int i = 0; i < listaProveedor.size(); i++) {

					listaProveedor[i].imprimeStock();




				};
			}

			else if (menu == 3) {

				cout << "Ingresa el nombre del comprador: " << endl;
				cin >> nombreComprador;

				cout << "Cuanto saldo se tiene: " << endl;
				cin >> saldoComprador;


				Comprador compradorN(nombreComprador, saldoComprador);



				cout << "Ingresa el nombre del producto: " << endl;
				cin >> productoAComprar;

				for (int i = 0; i < listaProveedor.size(); i++) {
					if (productoAComprar == listaProveedor[i].getProducto().getNombreProducto()) {
						compradorN.comprarStock(listaProveedor[i]);
						

					}
					else {
						cout << "No se encontro el producto:  " << listaProveedor[i].getProducto().getNombreProducto() << endl;
					}

				};


				listaComprador.push_back(compradorN);
				saldoFinal = compradorN.getSaldo();
				cantidadCompra = compradorN.getCantidad();




			}

			else if (menu == 4) {

				cout << "Exit" << endl;
				break;

			}











		};


		escribir();
		
	

	

	return 0;
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






void escribir() {
	ofstream archivo;

	archivo.open("Productos11.txt", ios::out); //Abriendo el archivo


	if (archivo.fail()) {
		cout << "No se puede abrir el archivo ";
		exit(1);
	}

	for (int i = 0; i < listaComprador.size(); i++) { 


		archivo << "Ticket de: " << nombreComprador << endl;

		archivo << "Compro el producto: " << productoAComprar << endl;

		archivo << "Cantidad: " << cantidadCompra << endl;

		archivo << "Precio unitario: " << precio << endl;


		archivo << "Saldo original: " << saldoComprador << endl;

		archivo << "Saldo final: " << saldoFinal << endl;

		archivo << "Gracias por comprar " << endl;

		archivo << "--------------" << endl;


		archivo.close();



	}



}


