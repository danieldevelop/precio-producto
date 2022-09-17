#include <iostream>
#include <conio.h>

/**
 * Escriba un programa que lea el precio de un producto y muestre el precio
 * total con el iva (19%) del producto
 */
 using namespace std;
 
int main() {
	int precioProducto;
	const int IVA = 19;
	double totalConIVA;
	
	cout << "Digite el precio del producto: ";
	cin >> precioProducto;
	
	totalConIVA = (precioProducto * IVA) / 100;
	
	cout << "\n=== DETALLE BOLETA ===" << endl;
	cout << "Producto: Arroz Grado 2" << endl;
	cout << "\n---------------------" << endl;
	cout << "SubTotal: $" << precioProducto  <<" CLP"<< endl;
	cout << "IVA: " << IVA << "%" << endl;
	cout << "Total: $" << (precioProducto + totalConIVA) << " CLP"<< endl;
	
	getche();
	return 0;	
}
