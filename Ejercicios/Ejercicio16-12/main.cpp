/*  (Palíndromos) Escriba una plantilla de función llamada palindromo que reciba un parámetro vector y devuelva true o false, 
dependiendo de si el vector se lee igual o no tanto hacia adelante como hacia atrás (por ejemplo, un vector que contenga 1, 2, 3, 2, 1 es 
un palíndromo, pero un vector que contenga 1, 2, 3, 4 no lo es). */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <array>
#include <iterator> 
#include <conio.h>
using namespace std;


bool Palindromo(vector <int> num1) {
	vector< int > num2;
	reverse_copy(num1.cbegin(), num1.cend(), back_inserter(num2));
	if (num1 == num2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	ostream_iterator< int > salida(cout, " ");
	vector <int> num1;
	int valor,opc;

	do
	{
		cout << "Ingrese el numero	: ";
		cin >> valor;
		num1.push_back(valor);

		cout << "Desea agregar un nuevo numero? 1 para SI o -1 para NO"<<endl;
		cin >> opc;
	
	} while (opc != -1);

	cout << "Se lleno el vector con: "<< endl;
	copy(num1.cbegin(), num1.cend(), salida);

	if (Palindromo(num1)== true)
	{
		cout << "El Vectori SI es Palindromo" << endl;
	}
	else
	{
		cout << "El Vector NO es Palindromo" << endl;
	}
	 
		num1.clear();

	_getch();
}

