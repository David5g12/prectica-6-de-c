#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main() {
	cout << "        David Hernandez Hernandez__3K" << endl;
	cout << "        Proyecto de estructura de datos" << endl;
	//declarar un vector de cadenas
	vector<string>aves = { "Loro gris","Paloma de diamante","Coctel" };
	cout << "_____________________________________________________________________  " << endl;
	cout <<"|"<<" " << "Los valores del vector antes de insertar las demas aves es: " << "      | " << "\n";
	cout << "_____________________________________________________________________  " << endl;
	//itera sobre el vector para imprimir los valores
	for (int i = 0; i < aves.size(); i++){
		cout << setw(6)<< left;
		cout<<"|" << aves[i] << "     |";
	}
	cout << endl;
	cout << "_____________________________________________________________________  " << endl;
	cout << "\n" << endl;
	//Agregar tres valores al final del vector utilizando push back()
	aves.push_back("Mayna");
	aves.push_back("periquitos");
	aves.push_back("cacatua");
	cout << "_______________________________________________________________________________________________________" << endl;
	cout <<"|" << "                    " << "Los valores del vector despues de insertar las demas aves es:" << "                    |" << endl;
	cout << "_______________________________________________________________________________________________________" << endl;
	//itera sobre le vector para imprimir los valores
	for (int i = 0; i < aves.size(); i++) {
		cout << setw(6) << left;
		cout <<"|"<< aves[i] << " |";
	}
	cout <<endl;
	cout << "_______________________________________________________________________________________________________" << endl;
	cout << "\n";
	return 0;
}