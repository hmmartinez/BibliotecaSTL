/*(Eliminación de duplicados)  Lea 20 enteros y colóquelos en un contenedor array. A continuación, use el algoritmo unique para reducir el array
a los valores únicos introducidos por el usuario. Use el algoritmo copy para mostrar los valores únicos.
*/

#include <array>
#include <vector>

#include <algorithm>
#include <iostream>
#include <conio.h>
#include <iterator>
using namespace std;

int main() {

	ostream_iterator< int > salida(cout, " ");
	int num;
	array <int, 20>arreglo;
	

	for (int i = 0; i <arreglo.size(); i++)
	{
		cout << "Ingrese 20 valores en orden: ";
		cin >> num;
		arreglo[i] = num;
	
	}
	cout << "el arreglo tiene"<<endl;
	copy(arreglo.cbegin(), arreglo.cend(), salida);
	auto Ufinal = unique(arreglo.begin(), arreglo.end());
	cout << "\n\n===== Numeros unicos ====" << endl;
	copy(arreglo.begin(), Ufinal, salida);


	
	_getch();
}